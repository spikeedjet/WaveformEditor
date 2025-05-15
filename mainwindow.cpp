#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clipareawidget.h"
#include "sourcewidget.h"
#include "sinewavewidget.h"
#include "sinewave.h"
#include "trianglewave.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    source = new SourceWidget;
    clipArea = new ClipAreaWidget(this);
    sinwavewidget = new SineWaveWidget;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCreateSinWave_clicked()
{

    sinWave.ch = ui->lineEditch->text().toInt();
    sinWave.traveltime = ui->lineEdittraveltime->text().toDouble();
    sinWave.magnitude = ui->lineEditmagnitude->text().toDouble();
    sinWave.frequency = ui->lineEditfrequence->text().toDouble();
    sinWave.phase = ui->lineEditphase->text().toDouble();
    sinWave.bias = ui->lineEditbias->text().toDouble();



    qDebug() << "生成函数被调用";
    QMessageBox::information(this, "提示", "正弦波生成成功！", QMessageBox::Ok);
    qDebug() << sinWave.bias;
}


void MainWindow::on_pushButtonCreatePulseWave_clicked()
{
    triangleWave.pos1 = ui->lineEditpos1->text().toDouble();
    triangleWave.pos2 = ui->lineEditpos2->text().toDouble();
    triangleWave.t12 = ui->lineEditt12->text().toDouble();
    triangleWave.t2 = ui->lineEditt2->text().toDouble();
    triangleWave.t21 = ui->lineEditt21->text().toDouble();
    triangleWave.t1 = ui->lineEditt1->text().toDouble();
    triangleWave.loop = ui->lineEditloop->text().toInt();

    qDebug() << "生成函数被调用";
    QMessageBox::information(this, "提示", "三角波生成成功！", QMessageBox::Ok);

}

