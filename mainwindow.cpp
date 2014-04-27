#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <qsound.h>
#include <QStringRef>
#include <QMessageBox>
#include <QTime>
#include <QDate>
#include <QDateTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   ui->groupBox_Output->setDisabled(true);
   ui->lineEdit_Cur_Pack->setCursorPosition(0);
   ui->spinBox_Amount->setDisabled(true);
   ui->spinBox_Amount->clear();
   ui->lineEdit_Cur_Item->setDisabled(true);
   ui->spinBox_Left->setDisabled(true);
   ui->lineEdit_ERA_Number->setDisabled(true);
   tableRow = 0;
   leftItemsCount = 0;

   qsSoundNewAmount    = "sounds/NewAmount.wav";
   qsSoundNewItemError = "sounds/NewItemError.wav";
   qsSoundNewItemOk    = "sounds/NewItemOk.wav";
   qsSoundNewPack      = "sounds/NewPack.wav";
   qsSoundStartUp      = "sounds/StartUp.wav";
   qsSoundPackComplet  = "sounds/PackComplet.wav";
   logStart();

   QSound::play(qsSoundStartUp);
}

MainWindow::~MainWindow()
{
   logFile.close();
    delete ui;
}

void MainWindow::on_lineEdit_Cur_Pack_editingFinished()
{
   qsTemp = ui->lineEdit_Cur_Pack->text();
   if (qsTemp.isEmpty()) return;
   ui->spinBox_Amount->setEnabled(true);
   ui->spinBox_Amount->setFocus();
   ui->lineEdit_Cur_Pack->setDisabled(true);
   QSound::play(qsSoundNewPack);
}

void MainWindow::on_spinBox_Amount_editingFinished()
{
   ui->lineEdit_Cur_Item->setEnabled(true);

   leftItemsCount = ui->spinBox_Amount->value();
   ui->spinBox_Left->setValue(leftItemsCount);

   ui->spinBox_Amount->setDisabled(true);
   ui->lineEdit_Cur_Item->setFocus();
   QSound::play(qsSoundNewAmount);
}

void MainWindow::on_lineEdit_Cur_Item_editingFinished()
{
   QTextStream logFileOut(&logFile);
   qsTemp = ui->lineEdit_Cur_Item->text();
   if (qsTemp.isEmpty()) return;
   ui->lineEdit_Cur_Item->clear();
   QString qsTime = QTime::currentTime().toString("HH:mm:ss");
   QTableWidgetItem *newItemTime = new QTableWidgetItem(qsTime);
   QTableWidgetItem *newItemPack = new QTableWidgetItem(ui->lineEdit_Cur_Pack->text());
   QTableWidgetItem *newItemItem = new QTableWidgetItem(qsTemp);
   QTableWidgetItem *newItemOk = new QTableWidgetItem("OK");
   QTableWidgetItem *newItemError = new QTableWidgetItem("Error");
   QTableWidgetItem *newItemERA = new QTableWidgetItem(" ");
   ui->tableWidget->setRowCount(tableRow+1);
   ui->tableWidget->insertRow(0);

   ui->tableWidget->setItem(0, 0, newItemTime);
   qsLogRow.append(newItemTime->text()).append(";\t");

   ui->tableWidget->setItem(0, 1, newItemPack);
   qsLogRow.append(newItemPack->text()).append(";\t");

   ui->tableWidget->setItem(0, 2, newItemItem);
   qsLogRow.append(newItemItem->text()).append(";\t");
   tableRow++;

   if (chek_Pack_and_Item(ui->lineEdit_Cur_Pack->text(),qsTemp))
   {
      ui->tableWidget->setItem(0, 3, newItemOk);
      qsLogRow.append(newItemOk->text()).append(";\t");
      leftItemsCount--;
      ui->spinBox_Left->setValue(leftItemsCount);
      QSound::play(qsSoundNewItemOk);

   }else
   {
      ui->tableWidget->setItem(0, 3, newItemError);
      qsLogRow.append(newItemError->text()).append(";\t");
      QSound::play(qsSoundNewItemError);
   }
   ui->tableWidget->setItem(0, 4, newItemERA);

   ui->tableWidget->resizeColumnsToContents();
   if (leftItemsCount == 0){
      newPack();
   }else
   {
      qsLogRow.append(newItemERA->text()).append(";\n");
      logFileOut <<qsLogRow;
      qDebug() << "qsLogRow Not" << qsLogRow;
      qsLogRow.clear();
   }
}

bool MainWindow::chek_Pack_and_Item(QString qsPack, QString qsItem)
{
   QString qsNumPack;
   QString qsNumItem;

   QStringRef qsrPack(&qsPack);
   QStringRef qsrItem(&qsItem);
   QChar qCh;
   int i =0;
   for (i=0; i<qsrPack.length(); i++)
   {
      qCh = qsrPack.at(i);
      if (qCh.isDigit())
      {
         qsNumPack.append(qCh);
      }
   }

   for (i=0; i<qsrItem.length(); i++)
   {
      qCh = qsrItem.at(i);
      if (qCh.isDigit())
      {
         qsNumItem.append(qCh);
      }
   }

   return (qsNumPack == qsNumItem);
}

void MainWindow::newPack()
{
   ui->lineEdit_Cur_Item->setDisabled(true);
   ui->lineEdit_ERA_Number->setEnabled(true);
   ui->lineEdit_ERA_Number->setFocus();
}

void MainWindow::on_lineEdit_ERA_Number_editingFinished()
{
   QTextStream logFileOut(&logFile);
   qsTemp = ui->lineEdit_ERA_Number->text();
   if (qsTemp.isEmpty()) return;
   QTableWidgetItem *newItemERA = new QTableWidgetItem(qsTemp);
   ui->tableWidget->setItem(0, 4, newItemERA);
   ui->tableWidget->resizeColumnsToContents();

   qsLogRow.append(qsTemp).append(";\n");
   logFileOut <<qsLogRow;
   qDebug() << "qsLogRow ERA" << qsLogRow;
   qsLogRow.clear();

   ui->lineEdit_ERA_Number->clear();
   ui->lineEdit_ERA_Number->setDisabled(true);

   ui->spinBox_Amount->clear();

   ui->lineEdit_Cur_Pack->clear();
   ui->lineEdit_Cur_Pack->setEnabled(true);
   ui->lineEdit_Cur_Pack->setFocus();  
}

void MainWindow::logStart(){
   QDate curDate = QDate::currentDate();
   qsTemp = curDate.toString("logs/Log-yyyy-MM-dd.txt");
   logFile.setFileName(qsTemp);
   if (!logFile.open(QIODevice::Append | QIODevice::Text)){
      QMessageBox::StandardButton info;
      info = QMessageBox::information(
               this,
               "Can't create file",
               "Can't create file with name " +qsTemp,
               QMessageBox::Ok);
      }
   QTextStream logFileOut(&logFile);
   for (int i=0; i<ui->tableWidget->columnCount(); i++){
      qsTemp = (ui->tableWidget->horizontalHeaderItem(i))->text();
      logFileOut << qsTemp << ";\t";
   }
   logFileOut << "\n";
   logFile.flush();
}
