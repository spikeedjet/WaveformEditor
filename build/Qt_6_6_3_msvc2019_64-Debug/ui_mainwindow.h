/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clipareawidget.h>
#include <sinewavewidget.h>
#include <sourcewidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    ClipAreaWidget *clipAreaWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxSinCreator;
    QVBoxLayout *verticalLayout;
    SineWaveWidget *sineWaveWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditch;
    QLabel *label_4;
    QLineEdit *lineEdittraveltime;
    QLabel *label_6;
    QLineEdit *lineEditmagnitude;
    QLabel *label_8;
    QLineEdit *lineEditfrequence;
    QLabel *label_10;
    QLineEdit *lineEditphase;
    QLabel *label_12;
    QLineEdit *lineEditbias;
    QPushButton *pushButtonCreateSinWave;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    SourceWidget *sourceWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *lineEditt2;
    QLineEdit *lineEditt12;
    QLineEdit *lineEditpos2;
    QLineEdit *lineEditt1;
    QLineEdit *lineEditpos1;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEditt21;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEditloop;
    QPushButton *pushButtonCreatePulseWave;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1504, 894);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 1471, 381));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        clipAreaWidget = new ClipAreaWidget(groupBox);
        clipAreaWidget->setObjectName("clipAreaWidget");

        gridLayout_3->addWidget(clipAreaWidget, 0, 0, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 410, 1081, 441));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBoxSinCreator = new QGroupBox(layoutWidget);
        groupBoxSinCreator->setObjectName("groupBoxSinCreator");
        verticalLayout = new QVBoxLayout(groupBoxSinCreator);
        verticalLayout->setObjectName("verticalLayout");
        sineWaveWidget = new SineWaveWidget(groupBoxSinCreator);
        sineWaveWidget->setObjectName("sineWaveWidget");

        verticalLayout->addWidget(sineWaveWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBoxSinCreator);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditch = new QLineEdit(groupBoxSinCreator);
        lineEditch->setObjectName("lineEditch");

        gridLayout->addWidget(lineEditch, 0, 1, 1, 1);

        label_4 = new QLabel(groupBoxSinCreator);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEdittraveltime = new QLineEdit(groupBoxSinCreator);
        lineEdittraveltime->setObjectName("lineEdittraveltime");

        gridLayout->addWidget(lineEdittraveltime, 1, 1, 1, 1);

        label_6 = new QLabel(groupBoxSinCreator);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lineEditmagnitude = new QLineEdit(groupBoxSinCreator);
        lineEditmagnitude->setObjectName("lineEditmagnitude");

        gridLayout->addWidget(lineEditmagnitude, 2, 1, 1, 1);

        label_8 = new QLabel(groupBoxSinCreator);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        lineEditfrequence = new QLineEdit(groupBoxSinCreator);
        lineEditfrequence->setObjectName("lineEditfrequence");

        gridLayout->addWidget(lineEditfrequence, 3, 1, 1, 1);

        label_10 = new QLabel(groupBoxSinCreator);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        lineEditphase = new QLineEdit(groupBoxSinCreator);
        lineEditphase->setObjectName("lineEditphase");

        gridLayout->addWidget(lineEditphase, 4, 1, 1, 1);

        label_12 = new QLabel(groupBoxSinCreator);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 5, 0, 1, 1);

        lineEditbias = new QLineEdit(groupBoxSinCreator);
        lineEditbias->setObjectName("lineEditbias");

        gridLayout->addWidget(lineEditbias, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButtonCreateSinWave = new QPushButton(groupBoxSinCreator);
        pushButtonCreateSinWave->setObjectName("pushButtonCreateSinWave");

        verticalLayout->addWidget(pushButtonCreateSinWave, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 1);

        horizontalLayout->addWidget(groupBoxSinCreator);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        sourceWidget = new SourceWidget(groupBox_2);
        sourceWidget->setObjectName("sourceWidget");

        verticalLayout_2->addWidget(sourceWidget);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        lineEditt2 = new QLineEdit(groupBox_2);
        lineEditt2->setObjectName("lineEditt2");

        gridLayout_2->addWidget(lineEditt2, 3, 1, 1, 1);

        lineEditt12 = new QLineEdit(groupBox_2);
        lineEditt12->setObjectName("lineEditt12");

        gridLayout_2->addWidget(lineEditt12, 2, 1, 1, 1);

        lineEditpos2 = new QLineEdit(groupBox_2);
        lineEditpos2->setObjectName("lineEditpos2");

        gridLayout_2->addWidget(lineEditpos2, 1, 1, 1, 1);

        lineEditt1 = new QLineEdit(groupBox_2);
        lineEditt1->setObjectName("lineEditt1");

        gridLayout_2->addWidget(lineEditt1, 5, 1, 1, 1);

        lineEditpos1 = new QLineEdit(groupBox_2);
        lineEditpos1->setObjectName("lineEditpos1");

        gridLayout_2->addWidget(lineEditpos1, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        lineEditt21 = new QLineEdit(groupBox_2);
        lineEditt21->setObjectName("lineEditt21");

        gridLayout_2->addWidget(lineEditt21, 4, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 5, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 6, 0, 1, 1);

        lineEditloop = new QLineEdit(groupBox_2);
        lineEditloop->setObjectName("lineEditloop");

        gridLayout_2->addWidget(lineEditloop, 6, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        pushButtonCreatePulseWave = new QPushButton(groupBox_2);
        pushButtonCreatePulseWave->setObjectName("pushButtonCreatePulseWave");

        verticalLayout_2->addWidget(pushButtonCreatePulseWave, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 1);

        horizontalLayout->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1504, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\263\242\345\275\242\347\274\226\350\276\221\345\214\272", nullptr));
        groupBoxSinCreator->setTitle(QCoreApplication::translate("MainWindow", "\344\270\211\350\247\222\346\263\242\347\224\237\346\210\220\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ch: \346\216\247\345\210\266\345\231\250\351\200\232\351\201\223", nullptr));
        lineEditch->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "traveltime: \346\227\266\351\227\264\357\274\214\345\215\225\344\275\215\345\276\256\347\247\222", nullptr));
        lineEdittraveltime->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "magnitude: \346\255\243\345\274\246\346\263\242\347\232\204\345\244\247\345\260\217", nullptr));
        lineEditmagnitude->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "frequency: \345\215\225\344\275\215Hz", nullptr));
        lineEditfrequence->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "phase: \346\257\217\345\215\225\344\275\215\347\232\204\351\230\266\346\256\265\357\274\2141.0\344\273\243\350\241\250\344\270\200\344\270\252\346\200\273\345\221\250\346\234\237", nullptr));
        lineEditphase->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "bias: \346\255\243\345\274\246\346\263\242\347\232\204\345\201\217\347\247\273\351\207\217\357\274\210\344\273\2160\345\274\200\345\247\213\357\274\211\347\232\204\345\200\274", nullptr));
        lineEditbias->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonCreateSinWave->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\221\250\346\234\237\346\210\226\346\214\201\347\273\255\347\232\204\350\204\211\345\206\262\345\272\217\345\210\227\347\224\237\346\210\220\345\231\250", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "t21:  \344\273\216\344\275\215\347\275\2562\350\277\224\345\233\236\345\210\260\344\275\215\347\275\2561\347\232\204\346\227\266\351\227\264\357\274\214\345\215\225\344\275\215\344\270\272\345\276\256\347\247\222", nullptr));
        lineEditt2->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        lineEditt12->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        lineEditpos2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lineEditt1->setText(QCoreApplication::translate("MainWindow", "400", nullptr));
        lineEditpos1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "t12: \344\273\216\344\275\215\347\275\2561\345\210\2602\347\232\204\346\227\266\351\227\264\357\274\214\345\215\225\344\275\215\344\270\272\345\276\256\347\247\222", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "pos1: 1\347\232\204\344\275\215\347\275\256", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "pos2: 2\347\232\204\344\275\215\347\275\256", nullptr));
        lineEditt21->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "t2: pos2\344\277\235\346\214\201\346\227\266\351\227\264\357\274\214\345\215\225\344\275\215\344\270\272\345\276\256\347\247\222", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "t1: pos1\344\277\235\346\214\201\346\227\266\351\227\264\357\274\214\345\215\225\344\275\215\344\270\272\345\276\256\347\247\222", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "loop: \350\277\255\344\273\243\350\256\241\346\225\260\357\274\214\351\207\215\345\244\215\346\254\241\346\225\260 (0\350\241\250\347\244\272\346\227\240\351\231\220\345\276\252\347\216\257)", nullptr));
        lineEditloop->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonCreatePulseWave->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
