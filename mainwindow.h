#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
   ~MainWindow();


private slots:
   void on_lineEdit_Cur_Pack_editingFinished();
   void on_lineEdit_Cur_Item_editingFinished();
   bool chek_Pack_and_Item(QString qsPack, QString qsItem);
   void newPack();
   void on_spinBox_Amount_editingFinished();

private:
    Ui::MainWindow *ui;

    QString qsTemp;
    QString qsSoundNewAmount;
    QString qsSoundNewItemError;
    QString qsSoundNewItemOk;
    QString qsSoundNewPack;
    QString qsSoundStartUp;
    QString qsSoundPackComplet;

    int tableRow;
    int leftItemsCount;
};

#endif // MAINWINDOW_H
