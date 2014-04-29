#ifndef MISSDIALOG_H
#define MISSDIALOG_H

#include <QDialog>

namespace Ui {
    class MissDialog;
}

class MissDialog : public QDialog
{
    Q_OBJECT

protected:
      void closeEvent(QCloseEvent *event);
public:
    explicit MissDialog(QWidget *parent = 0);
    ~MissDialog();

private slots:

   void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::MissDialog *ui;
};

#endif // MISSDIALOG_H
