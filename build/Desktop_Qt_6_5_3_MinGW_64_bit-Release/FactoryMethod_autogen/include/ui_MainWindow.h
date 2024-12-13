/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QFormLayout *formLayout;
    QLabel *label_transport_type;
    QComboBox *comboBox_transport_type;
    QLabel *label_distance;
    QLineEdit *lineEdit_distance;
    QLabel *label_cargo;
    QLineEdit *lineEdit_cargo;
    QHBoxLayout *horizontalLayoutButtons;
    QPushButton *button_calculate;
    QPushButton *button_generate_report;
    QHBoxLayout *horizontalLayoutButtons1;
    QTextEdit *textEdit_output;
    QTextEdit *textEdit_output_report;
    QPushButton *button_clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(centralwidget);
        label_title->setObjectName("label_title");
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_title);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_transport_type = new QLabel(centralwidget);
        label_transport_type->setObjectName("label_transport_type");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_transport_type);

        comboBox_transport_type = new QComboBox(centralwidget);
        comboBox_transport_type->addItem(QString());
        comboBox_transport_type->addItem(QString());
        comboBox_transport_type->addItem(QString());
        comboBox_transport_type->addItem(QString());
        comboBox_transport_type->addItem(QString());
        comboBox_transport_type->setObjectName("comboBox_transport_type");

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_transport_type);

        label_distance = new QLabel(centralwidget);
        label_distance->setObjectName("label_distance");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_distance);

        lineEdit_distance = new QLineEdit(centralwidget);
        lineEdit_distance->setObjectName("lineEdit_distance");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_distance);

        label_cargo = new QLabel(centralwidget);
        label_cargo->setObjectName("label_cargo");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_cargo);

        lineEdit_cargo = new QLineEdit(centralwidget);
        lineEdit_cargo->setObjectName("lineEdit_cargo");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_cargo);


        verticalLayout->addLayout(formLayout);

        horizontalLayoutButtons = new QHBoxLayout();
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        button_calculate = new QPushButton(centralwidget);
        button_calculate->setObjectName("button_calculate");

        horizontalLayoutButtons->addWidget(button_calculate);

        button_generate_report = new QPushButton(centralwidget);
        button_generate_report->setObjectName("button_generate_report");

        horizontalLayoutButtons->addWidget(button_generate_report);


        verticalLayout->addLayout(horizontalLayoutButtons);

        horizontalLayoutButtons1 = new QHBoxLayout();
        horizontalLayoutButtons1->setObjectName("horizontalLayoutButtons1");
        textEdit_output = new QTextEdit(centralwidget);
        textEdit_output->setObjectName("textEdit_output");
        textEdit_output->setReadOnly(true);

        horizontalLayoutButtons1->addWidget(textEdit_output);

        textEdit_output_report = new QTextEdit(centralwidget);
        textEdit_output_report->setObjectName("textEdit_output_report");
        textEdit_output_report->setReadOnly(true);

        horizontalLayoutButtons1->addWidget(textEdit_output_report);


        verticalLayout->addLayout(horizontalLayoutButtons1);

        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName("button_clear");

        verticalLayout->addWidget(button_clear);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \321\202\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202\320\276\320\274", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \321\202\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202\320\276\320\274", nullptr));
        label_transport_type->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\202\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202\320\260:", nullptr));
        comboBox_transport_type->setItemText(0, QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\267\320\276\320\262\320\270\320\272", nullptr));
        comboBox_transport_type->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\260\320\261\320\273\321\214", nullptr));
        comboBox_transport_type->setItemText(2, QCoreApplication::translate("MainWindow", "\320\241\320\260\320\274\320\276\320\273\320\265\321\202", nullptr));
        comboBox_transport_type->setItemText(3, QCoreApplication::translate("MainWindow", "\320\224\321\200\320\276\320\275", nullptr));
        comboBox_transport_type->setItemText(4, QCoreApplication::translate("MainWindow", "\320\237\320\276\320\265\320\267\320\264", nullptr));

        label_distance->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 (\320\272\320\274):", nullptr));
        lineEdit_distance->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        label_cargo->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\201 \320\263\321\200\321\203\320\267\320\260 (\321\202\320\276\320\275\320\275):", nullptr));
        lineEdit_cargo->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\265\321\201 \320\263\321\200\321\203\320\267\320\260", nullptr));
        button_calculate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\264\320\276\321\201\321\202\320\260\320\262\320\272\321\203", nullptr));
        button_generate_report->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\200\320\260\321\201\321\207\320\265\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
