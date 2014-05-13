#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTableWidgetItem>
#include "missdialog.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
   ~MainWindow();
   void logStart();

private slots:
   void on_lineEdit_Cur_Pack_editingFinished();
   void on_lineEdit_Cur_Item_editingFinished();
   bool chek_Pack_and_Item(QString qsPack, QString qsItem);
   void newPack();
   void on_spinBox_Amount_editingFinished();

   void on_lineEdit_ERA_Number_editingFinished();

   void on_pushButton_Reset_clicked();

private:
    Ui::MainWindow *ui;

    QString qsTemp;
    QString qsLogRow;
    QString qsSoundNewAmount;
    QString qsSoundNewItemError;
    QString qsSoundNewItemOk;
    QString qsSoundNewPack;
    QString qsSoundStartUp;
    QString qsSoundPackComplet;

    QString qsPackBegin;
    QString qsItemBegin;

    QString qsPackValue;
    QString qsItemValue;


    QFile logFile;
    int tableRow;
    int leftItemsCount;
};

#endif // MAINWINDOW_H
