# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'mainwindow.ui'
##
## Created by: Qt User Interface Compiler version 6.6.3
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QGridLayout, QGroupBox, QHBoxLayout,
    QLabel, QLineEdit, QMainWindow, QMenuBar,
    QPushButton, QSizePolicy, QStatusBar, QVBoxLayout,
    QWidget)

from clipareawidget import ClipAreaWidget
from sinewavewidget import SineWaveWidget
from sourcewidget import SourceWidget

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(1504, 894)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.groupBox = QGroupBox(self.centralwidget)
        self.groupBox.setObjectName(u"groupBox")
        self.groupBox.setGeometry(QRect(10, 10, 1471, 381))
        self.gridLayout_3 = QGridLayout(self.groupBox)
        self.gridLayout_3.setObjectName(u"gridLayout_3")
        self.clipAreaWidget = ClipAreaWidget(self.groupBox)
        self.clipAreaWidget.setObjectName(u"clipAreaWidget")

        self.gridLayout_3.addWidget(self.clipAreaWidget, 0, 0, 1, 1)

        self.layoutWidget = QWidget(self.centralwidget)
        self.layoutWidget.setObjectName(u"layoutWidget")
        self.layoutWidget.setGeometry(QRect(10, 410, 1081, 441))
        self.horizontalLayout = QHBoxLayout(self.layoutWidget)
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.groupBoxSinCreator = QGroupBox(self.layoutWidget)
        self.groupBoxSinCreator.setObjectName(u"groupBoxSinCreator")
        self.verticalLayout = QVBoxLayout(self.groupBoxSinCreator)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.sineWaveWidget = SineWaveWidget(self.groupBoxSinCreator)
        self.sineWaveWidget.setObjectName(u"sineWaveWidget")

        self.verticalLayout.addWidget(self.sineWaveWidget)

        self.gridLayout = QGridLayout()
        self.gridLayout.setObjectName(u"gridLayout")
        self.label = QLabel(self.groupBoxSinCreator)
        self.label.setObjectName(u"label")

        self.gridLayout.addWidget(self.label, 0, 0, 1, 1)

        self.lineEditch = QLineEdit(self.groupBoxSinCreator)
        self.lineEditch.setObjectName(u"lineEditch")

        self.gridLayout.addWidget(self.lineEditch, 0, 1, 1, 1)

        self.label_4 = QLabel(self.groupBoxSinCreator)
        self.label_4.setObjectName(u"label_4")

        self.gridLayout.addWidget(self.label_4, 1, 0, 1, 1)

        self.lineEdittraveltime = QLineEdit(self.groupBoxSinCreator)
        self.lineEdittraveltime.setObjectName(u"lineEdittraveltime")

        self.gridLayout.addWidget(self.lineEdittraveltime, 1, 1, 1, 1)

        self.label_6 = QLabel(self.groupBoxSinCreator)
        self.label_6.setObjectName(u"label_6")

        self.gridLayout.addWidget(self.label_6, 2, 0, 1, 1)

        self.lineEditmagnitude = QLineEdit(self.groupBoxSinCreator)
        self.lineEditmagnitude.setObjectName(u"lineEditmagnitude")

        self.gridLayout.addWidget(self.lineEditmagnitude, 2, 1, 1, 1)

        self.label_8 = QLabel(self.groupBoxSinCreator)
        self.label_8.setObjectName(u"label_8")

        self.gridLayout.addWidget(self.label_8, 3, 0, 1, 1)

        self.lineEditfrequence = QLineEdit(self.groupBoxSinCreator)
        self.lineEditfrequence.setObjectName(u"lineEditfrequence")

        self.gridLayout.addWidget(self.lineEditfrequence, 3, 1, 1, 1)

        self.label_10 = QLabel(self.groupBoxSinCreator)
        self.label_10.setObjectName(u"label_10")

        self.gridLayout.addWidget(self.label_10, 4, 0, 1, 1)

        self.lineEditphase = QLineEdit(self.groupBoxSinCreator)
        self.lineEditphase.setObjectName(u"lineEditphase")

        self.gridLayout.addWidget(self.lineEditphase, 4, 1, 1, 1)

        self.label_12 = QLabel(self.groupBoxSinCreator)
        self.label_12.setObjectName(u"label_12")

        self.gridLayout.addWidget(self.label_12, 5, 0, 1, 1)

        self.lineEditbias = QLineEdit(self.groupBoxSinCreator)
        self.lineEditbias.setObjectName(u"lineEditbias")

        self.gridLayout.addWidget(self.lineEditbias, 5, 1, 1, 1)


        self.verticalLayout.addLayout(self.gridLayout)

        self.pushButtonCreateSinWave = QPushButton(self.groupBoxSinCreator)
        self.pushButtonCreateSinWave.setObjectName(u"pushButtonCreateSinWave")

        self.verticalLayout.addWidget(self.pushButtonCreateSinWave, 0, Qt.AlignmentFlag.AlignHCenter)

        self.verticalLayout.setStretch(0, 1)
        self.verticalLayout.setStretch(1, 2)
        self.verticalLayout.setStretch(2, 1)

        self.horizontalLayout.addWidget(self.groupBoxSinCreator)

        self.groupBox_2 = QGroupBox(self.layoutWidget)
        self.groupBox_2.setObjectName(u"groupBox_2")
        self.verticalLayout_2 = QVBoxLayout(self.groupBox_2)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.sourceWidget = SourceWidget(self.groupBox_2)
        self.sourceWidget.setObjectName(u"sourceWidget")

        self.verticalLayout_2.addWidget(self.sourceWidget)

        self.gridLayout_2 = QGridLayout()
        self.gridLayout_2.setObjectName(u"gridLayout_2")
        self.label_11 = QLabel(self.groupBox_2)
        self.label_11.setObjectName(u"label_11")

        self.gridLayout_2.addWidget(self.label_11, 4, 0, 1, 1)

        self.lineEditt2 = QLineEdit(self.groupBox_2)
        self.lineEditt2.setObjectName(u"lineEditt2")

        self.gridLayout_2.addWidget(self.lineEditt2, 3, 1, 1, 1)

        self.lineEditt12 = QLineEdit(self.groupBox_2)
        self.lineEditt12.setObjectName(u"lineEditt12")

        self.gridLayout_2.addWidget(self.lineEditt12, 2, 1, 1, 1)

        self.lineEditpos2 = QLineEdit(self.groupBox_2)
        self.lineEditpos2.setObjectName(u"lineEditpos2")

        self.gridLayout_2.addWidget(self.lineEditpos2, 1, 1, 1, 1)

        self.lineEditt1 = QLineEdit(self.groupBox_2)
        self.lineEditt1.setObjectName(u"lineEditt1")

        self.gridLayout_2.addWidget(self.lineEditt1, 5, 1, 1, 1)

        self.lineEditpos1 = QLineEdit(self.groupBox_2)
        self.lineEditpos1.setObjectName(u"lineEditpos1")

        self.gridLayout_2.addWidget(self.lineEditpos1, 0, 1, 1, 1)

        self.label_7 = QLabel(self.groupBox_2)
        self.label_7.setObjectName(u"label_7")

        self.gridLayout_2.addWidget(self.label_7, 2, 0, 1, 1)

        self.label_2 = QLabel(self.groupBox_2)
        self.label_2.setObjectName(u"label_2")

        self.gridLayout_2.addWidget(self.label_2, 0, 0, 1, 1)

        self.label_5 = QLabel(self.groupBox_2)
        self.label_5.setObjectName(u"label_5")

        self.gridLayout_2.addWidget(self.label_5, 1, 0, 1, 1)

        self.lineEditt21 = QLineEdit(self.groupBox_2)
        self.lineEditt21.setObjectName(u"lineEditt21")

        self.gridLayout_2.addWidget(self.lineEditt21, 4, 1, 1, 1)

        self.label_9 = QLabel(self.groupBox_2)
        self.label_9.setObjectName(u"label_9")

        self.gridLayout_2.addWidget(self.label_9, 3, 0, 1, 1)

        self.label_13 = QLabel(self.groupBox_2)
        self.label_13.setObjectName(u"label_13")

        self.gridLayout_2.addWidget(self.label_13, 5, 0, 1, 1)

        self.label_14 = QLabel(self.groupBox_2)
        self.label_14.setObjectName(u"label_14")

        self.gridLayout_2.addWidget(self.label_14, 6, 0, 1, 1)

        self.lineEditloop = QLineEdit(self.groupBox_2)
        self.lineEditloop.setObjectName(u"lineEditloop")

        self.gridLayout_2.addWidget(self.lineEditloop, 6, 1, 1, 1)


        self.verticalLayout_2.addLayout(self.gridLayout_2)

        self.pushButtonCreatePulseWave = QPushButton(self.groupBox_2)
        self.pushButtonCreatePulseWave.setObjectName(u"pushButtonCreatePulseWave")

        self.verticalLayout_2.addWidget(self.pushButtonCreatePulseWave, 0, Qt.AlignmentFlag.AlignHCenter)

        self.verticalLayout_2.setStretch(0, 1)
        self.verticalLayout_2.setStretch(1, 2)
        self.verticalLayout_2.setStretch(2, 1)

        self.horizontalLayout.addWidget(self.groupBox_2)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 1504, 17))
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MainWindow", None))
        self.groupBox.setTitle(QCoreApplication.translate("MainWindow", u"\u6ce2\u5f62\u7f16\u8f91\u533a", None))
        self.groupBoxSinCreator.setTitle(QCoreApplication.translate("MainWindow", u"\u4e09\u89d2\u6ce2\u751f\u6210\u5668", None))
        self.label.setText(QCoreApplication.translate("MainWindow", u"ch: \u63a7\u5236\u5668\u901a\u9053", None))
        self.lineEditch.setText(QCoreApplication.translate("MainWindow", u"1", None))
        self.label_4.setText(QCoreApplication.translate("MainWindow", u"traveltime: \u65f6\u95f4\uff0c\u5355\u4f4d\u5fae\u79d2", None))
        self.lineEdittraveltime.setText(QCoreApplication.translate("MainWindow", u"1000", None))
        self.label_6.setText(QCoreApplication.translate("MainWindow", u"magnitude: \u6b63\u5f26\u6ce2\u7684\u5927\u5c0f", None))
        self.lineEditmagnitude.setText(QCoreApplication.translate("MainWindow", u"50", None))
        self.label_8.setText(QCoreApplication.translate("MainWindow", u"frequency: \u5355\u4f4dHz", None))
        self.lineEditfrequence.setText(QCoreApplication.translate("MainWindow", u"5", None))
        self.label_10.setText(QCoreApplication.translate("MainWindow", u"phase: \u6bcf\u5355\u4f4d\u7684\u9636\u6bb5\uff0c1.0\u4ee3\u8868\u4e00\u4e2a\u603b\u5468\u671f", None))
        self.lineEditphase.setText(QCoreApplication.translate("MainWindow", u"0", None))
        self.label_12.setText(QCoreApplication.translate("MainWindow", u"bias: \u6b63\u5f26\u6ce2\u7684\u504f\u79fb\u91cf\uff08\u4ece0\u5f00\u59cb\uff09\u7684\u503c", None))
        self.lineEditbias.setText(QCoreApplication.translate("MainWindow", u"0", None))
        self.pushButtonCreateSinWave.setText(QCoreApplication.translate("MainWindow", u"\u751f\u6210", None))
        self.groupBox_2.setTitle(QCoreApplication.translate("MainWindow", u"\u5468\u671f\u6216\u6301\u7eed\u7684\u8109\u51b2\u5e8f\u5217\u751f\u6210\u5668", None))
        self.label_11.setText(QCoreApplication.translate("MainWindow", u"t21:  \u4ece\u4f4d\u7f6e2\u8fd4\u56de\u5230\u4f4d\u7f6e1\u7684\u65f6\u95f4\uff0c\u5355\u4f4d\u4e3a\u5fae\u79d2", None))
        self.lineEditt2.setText(QCoreApplication.translate("MainWindow", u"300", None))
        self.lineEditt12.setText(QCoreApplication.translate("MainWindow", u"500", None))
        self.lineEditpos2.setText(QCoreApplication.translate("MainWindow", u"1", None))
        self.lineEditt1.setText(QCoreApplication.translate("MainWindow", u"400", None))
        self.lineEditpos1.setText(QCoreApplication.translate("MainWindow", u"0", None))
        self.label_7.setText(QCoreApplication.translate("MainWindow", u"t12: \u4ece\u4f4d\u7f6e1\u52302\u7684\u65f6\u95f4\uff0c\u5355\u4f4d\u4e3a\u5fae\u79d2", None))
        self.label_2.setText(QCoreApplication.translate("MainWindow", u"pos1: 1\u7684\u4f4d\u7f6e", None))
        self.label_5.setText(QCoreApplication.translate("MainWindow", u"pos2: 2\u7684\u4f4d\u7f6e", None))
        self.lineEditt21.setText(QCoreApplication.translate("MainWindow", u"200", None))
        self.label_9.setText(QCoreApplication.translate("MainWindow", u"t2: pos2\u4fdd\u6301\u65f6\u95f4\uff0c\u5355\u4f4d\u4e3a\u5fae\u79d2", None))
        self.label_13.setText(QCoreApplication.translate("MainWindow", u"t1: pos1\u4fdd\u6301\u65f6\u95f4\uff0c\u5355\u4f4d\u4e3a\u5fae\u79d2", None))
        self.label_14.setText(QCoreApplication.translate("MainWindow", u"loop: \u8fed\u4ee3\u8ba1\u6570\uff0c\u91cd\u590d\u6b21\u6570 (0\u8868\u793a\u65e0\u9650\u5faa\u73af)", None))
        self.lineEditloop.setText(QCoreApplication.translate("MainWindow", u"0", None))
        self.pushButtonCreatePulseWave.setText(QCoreApplication.translate("MainWindow", u"\u751f\u6210", None))
    # retranslateUi

