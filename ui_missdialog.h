/********************************************************************************
** Form generated from reading UI file 'missdialog.ui'
**
** Created: Wed 30. Apr 00:37:50 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSDIALOG_H
#define UI_MISSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MissDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *MissDialog)
    {
        if (MissDialog->objectName().isEmpty())
            MissDialog->setObjectName(QString::fromUtf8("MissDialog"));
        MissDialog->setWindowModality(Qt::WindowModal);
        MissDialog->resize(233, 107);
        MissDialog->setContextMenuPolicy(Qt::NoContextMenu);
        MissDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(MissDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MissDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(MissDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MissDialog);

        QMetaObject::connectSlotsByName(MissDialog);
    } // setupUi

    void retranslateUi(QDialog *MissDialog)
    {
        MissDialog->setWindowTitle(QApplication::translate("MissDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MissDialog", "Please type \"YES\" \n"
"to continue fill pack.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MissDialog: public Ui_MissDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSDIALOG_H
