#include "missdialog.h"
#include "ui_missdialog.h"
#include <QDebug>
#include <QtGui>

MissDialog::MissDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MissDialog)
{
    ui->setupUi(this);
}

MissDialog::~MissDialog()
{
    delete ui;
}

void MissDialog::on_lineEdit_textEdited(const QString &arg1)
{
   if (arg1 == "YES") MissDialog::close();
}

void MissDialog::closeEvent(QCloseEvent *event)
{
   qDebug()<< "MissDialog::closeEvent";
   if (ui->lineEdit->text() == "YES"){
      done(QDialog::Accepted);
      event->accept();
   }else {
      event->ignore();
  }
}
