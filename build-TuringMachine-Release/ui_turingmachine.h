/********************************************************************************
** Form generated from reading UI file 'turingmachine.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TURINGMACHINE_H
#define UI_TURINGMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TuringMachine
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *StaEdit_0;
    QLineEdit *StaEdit_1;
    QLabel *label_6;
    QTextEdit *OutEdit;
    QLabel *label_7;
    QLineEdit *InputEdit;
    QPushButton *pushBtn;
    QTextEdit *OutputEdit;
    QPushButton *DisBtn;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TuringMachine)
    {
        if (TuringMachine->objectName().isEmpty())
            TuringMachine->setObjectName(QStringLiteral("TuringMachine"));
        TuringMachine->resize(767, 446);
        centralWidget = new QWidget(TuringMachine);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 211, 51));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 101, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 101, 31));
        StaEdit_0 = new QLineEdit(centralWidget);
        StaEdit_0->setObjectName(QStringLiteral("StaEdit_0"));
        StaEdit_0->setGeometry(QRect(140, 110, 111, 31));
        StaEdit_1 = new QLineEdit(centralWidget);
        StaEdit_1->setObjectName(QStringLiteral("StaEdit_1"));
        StaEdit_1->setGeometry(QRect(140, 170, 111, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(440, 0, 161, 51));
        OutEdit = new QTextEdit(centralWidget);
        OutEdit->setObjectName(QStringLiteral("OutEdit"));
        OutEdit->setGeometry(QRect(440, 50, 301, 231));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 220, 81, 41));
        InputEdit = new QLineEdit(centralWidget);
        InputEdit->setObjectName(QStringLiteral("InputEdit"));
        InputEdit->setGeometry(QRect(100, 220, 291, 31));
        pushBtn = new QPushButton(centralWidget);
        pushBtn->setObjectName(QStringLiteral("pushBtn"));
        pushBtn->setGeometry(QRect(610, 330, 81, 41));
        OutputEdit = new QTextEdit(centralWidget);
        OutputEdit->setObjectName(QStringLiteral("OutputEdit"));
        OutputEdit->setGeometry(QRect(30, 300, 371, 71));
        DisBtn = new QPushButton(centralWidget);
        DisBtn->setObjectName(QStringLiteral("DisBtn"));
        DisBtn->setGeometry(QRect(640, 20, 81, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 101, 21));
        TuringMachine->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TuringMachine);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 767, 23));
        TuringMachine->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TuringMachine);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TuringMachine->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TuringMachine);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TuringMachine->setStatusBar(statusBar);

        retranslateUi(TuringMachine);

        QMetaObject::connectSlotsByName(TuringMachine);
    } // setupUi

    void retranslateUi(QMainWindow *TuringMachine)
    {
        TuringMachine->setWindowTitle(QApplication::translate("TuringMachine", "TuringMachine", Q_NULLPTR));
        label->setText(QApplication::translate("TuringMachine", " TuringMachine", Q_NULLPTR));
        label_3->setText(QApplication::translate("TuringMachine", "\345\210\235\345\247\213\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("TuringMachine", "\347\273\210\346\255\242\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("TuringMachine", "\347\212\266\346\200\201\350\275\254\347\247\273\345\207\275\346\225\260\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("TuringMachine", "\350\276\223\345\205\245\345\270\246\357\274\232", Q_NULLPTR));
        pushBtn->setText(QApplication::translate("TuringMachine", "\350\277\220\350\241\214", Q_NULLPTR));
        DisBtn->setText(QApplication::translate("TuringMachine", "\346\230\276\347\244\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("TuringMachine", "20164382", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TuringMachine: public Ui_TuringMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURINGMACHINE_H
