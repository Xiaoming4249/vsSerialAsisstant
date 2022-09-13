#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <qicon.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , serialThread(new QThread)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->close_btn->setEnabled(false);
    ui->start_btn->setIcon(QIcon(":/icons/test-icon.PNG"));
    SerialCtrl *sCtrl = new SerialCtrl();
    //将串口控制工具移入子线程
    sCtrl->moveToThread(this->serialThread);
    //获取设备已连接的串口列表
    for (const QString name:sCtrl->getAvailablePortsName())
        ui->portSelect_comboBox->addItem(name);

    //信号槽绑定
    //开始按钮
    connect(ui->start_btn, &QPushButton::clicked, this, &MainWindow::startTransaction);
    connect(this, &MainWindow::startSignal, sCtrl,& SerialCtrl::waitingMessage);
    //关闭按钮
    connect(ui->close_btn, &QPushButton::clicked, this, [=](){
        ui->start_btn->setEnabled(true);
        ui->close_btn->setEnabled(false);
    });
    connect(ui->close_btn, &QPushButton::clicked, sCtrl, &SerialCtrl::closePort);
    //收到信息显示
    connect(sCtrl, &SerialCtrl::response, this, &MainWindow::displayResponse);
    //错误信息提示
    connect(sCtrl, &SerialCtrl::error, this, &MainWindow::error);
    serialThread->start();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete serialThread;
    serialThread->quit();
    serialThread->wait();
}

void MainWindow::displayResponse(QString s)
{
    ui->textBrowser->append(s);
}

void MainWindow::startTransaction()
{
    QString portName = ui->portSelect_comboBox->currentText();
    ui->start_btn->setEnabled(false);
    ui->close_btn->setEnabled(true);
    emit this->startSignal(portName, 1000);
}

void MainWindow::error(QString s){
    qDebug()<<s;
}
