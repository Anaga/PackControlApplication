/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 28. Apr 00:16:21 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_Input;
    QGridLayout *gridLayout;
    QLabel *label_Cur_Pack;
    QLineEdit *lineEdit_Cur_Pack;
    QLabel *label_Amount;
    QSpinBox *spinBox_Amount;
    QLabel *label_Cur_Item;
    QLineEdit *lineEdit_Cur_Item;
    QLabel *label_Left;
    QSpinBox *spinBox_Left;
    QLabel *label_ERA_Number;
    QLineEdit *lineEdit_ERA_Number;
    QGroupBox *groupBox_Output;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(798, 667);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_Input = new QGroupBox(centralWidget);
        groupBox_Input->setObjectName(QString::fromUtf8("groupBox_Input"));
        gridLayout = new QGridLayout(groupBox_Input);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Cur_Pack = new QLabel(groupBox_Input);
        label_Cur_Pack->setObjectName(QString::fromUtf8("label_Cur_Pack"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_Cur_Pack->setFont(font);

        gridLayout->addWidget(label_Cur_Pack, 0, 0, 1, 1);

        lineEdit_Cur_Pack = new QLineEdit(groupBox_Input);
        lineEdit_Cur_Pack->setObjectName(QString::fromUtf8("lineEdit_Cur_Pack"));
        lineEdit_Cur_Pack->setFont(font);
        lineEdit_Cur_Pack->setMaxLength(50);
        lineEdit_Cur_Pack->setPlaceholderText(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_Cur_Pack, 0, 1, 1, 1);

        label_Amount = new QLabel(groupBox_Input);
        label_Amount->setObjectName(QString::fromUtf8("label_Amount"));
        label_Amount->setFont(font);
        label_Amount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Amount, 0, 3, 1, 2);

        spinBox_Amount = new QSpinBox(groupBox_Input);
        spinBox_Amount->setObjectName(QString::fromUtf8("spinBox_Amount"));
        spinBox_Amount->setFont(font);

        gridLayout->addWidget(spinBox_Amount, 0, 5, 1, 1);

        label_Cur_Item = new QLabel(groupBox_Input);
        label_Cur_Item->setObjectName(QString::fromUtf8("label_Cur_Item"));
        label_Cur_Item->setFont(font);

        gridLayout->addWidget(label_Cur_Item, 1, 0, 2, 1);

        lineEdit_Cur_Item = new QLineEdit(groupBox_Input);
        lineEdit_Cur_Item->setObjectName(QString::fromUtf8("lineEdit_Cur_Item"));
        lineEdit_Cur_Item->setFont(font);
        lineEdit_Cur_Item->setInputMask(QString::fromUtf8(""));
        lineEdit_Cur_Item->setMaxLength(50);

        gridLayout->addWidget(lineEdit_Cur_Item, 1, 1, 2, 1);

        label_Left = new QLabel(groupBox_Input);
        label_Left->setObjectName(QString::fromUtf8("label_Left"));
        label_Left->setFont(font);
        label_Left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Left, 1, 3, 2, 2);

        spinBox_Left = new QSpinBox(groupBox_Input);
        spinBox_Left->setObjectName(QString::fromUtf8("spinBox_Left"));
        spinBox_Left->setFont(font);

        gridLayout->addWidget(spinBox_Left, 1, 5, 2, 1);

        label_ERA_Number = new QLabel(groupBox_Input);
        label_ERA_Number->setObjectName(QString::fromUtf8("label_ERA_Number"));
        label_ERA_Number->setFont(font);

        gridLayout->addWidget(label_ERA_Number, 3, 0, 1, 1);

        lineEdit_ERA_Number = new QLineEdit(groupBox_Input);
        lineEdit_ERA_Number->setObjectName(QString::fromUtf8("lineEdit_ERA_Number"));
        lineEdit_ERA_Number->setFont(font);
        lineEdit_ERA_Number->setMaxLength(50);

        gridLayout->addWidget(lineEdit_ERA_Number, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_Input);

        groupBox_Output = new QGroupBox(centralWidget);
        groupBox_Output->setObjectName(QString::fromUtf8("groupBox_Output"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_Output);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableWidget = new QTableWidget(groupBox_Output);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);

        horizontalLayout_2->addWidget(tableWidget);


        verticalLayout->addWidget(groupBox_Output);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PackControlApplication (10-04-2014) V0.1", 0, QApplication::UnicodeUTF8));
        groupBox_Input->setTitle(QString());
        label_Cur_Pack->setText(QApplication::translate("MainWindow", "Current pack ", 0, QApplication::UnicodeUTF8));
        lineEdit_Cur_Pack->setInputMask(QString());
        lineEdit_Cur_Pack->setText(QString());
        label_Amount->setText(QApplication::translate("MainWindow", "Amount", 0, QApplication::UnicodeUTF8));
        label_Cur_Item->setText(QApplication::translate("MainWindow", "Current item", 0, QApplication::UnicodeUTF8));
        lineEdit_Cur_Item->setPlaceholderText(QString());
        label_Left->setText(QApplication::translate("MainWindow", "Left", 0, QApplication::UnicodeUTF8));
        label_ERA_Number->setText(QApplication::translate("MainWindow", "ERA number", 0, QApplication::UnicodeUTF8));
        groupBox_Output->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Current pack", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Current item", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Check", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "ERA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
