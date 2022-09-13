#include "serialctrl.h"
#include <QTime>
#include <QDebug>

SerialCtrl::SerialCtrl()
{
//    connect(serial, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error),
//            this, &SerialCtrl::error);
    //connect(serial, &QSerialPort::readyRead, this, &SerialCtrl::readData);
}
QStringList SerialCtrl::getAvailablePortsName()
{
    QStringList list;
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos)
        list.append(info.portName());
    return list;
}
void SerialCtrl::waitingMessage(const QString &nowPortName, int nowWaitTimeout)
{

    //初始化参数
    serial = new QSerialPort();
    connect(serial, &QSerialPort::readyRead, this, &SerialCtrl::readData);
    qDebug()<<nowPortName;
    mutex.lock();
    QString portName = nowPortName;
    int waitTime = nowWaitTimeout;
    mutex.unlock();

    //开启串口
    if (portName.isEmpty()) {
        emit error(tr("No port name specified"));
        return;
    }

    serial->setPortName(portName);

    if(!serial->isOpen()){
        if (!serial->open(QIODevice::ReadWrite)) {
            emit error(tr("Can't open %1, error code %2")
                       .arg(portName).arg(serial->error()));
            return;
        }
        else{
            emit tip(tr("串口%1已被成功打开！").arg(portName));
        }
    }
//    while(true){
//        if (serial->waitForReadyRead(waitTime)) {
//            QByteArray responseData = serial->readAll();
//            while (serial->waitForReadyRead(10))
//                responseData += serial->readAll();
//            QString response(responseData);

//            qDebug()<<response;

//            emit this->response(response);
//        }
//    }
}
void SerialCtrl::closePort()
{
    if(serial->isOpen())
        serial->close();
    delete serial;
}

void SerialCtrl::readData()
{
    QByteArray data = serial->readAll();
    QString response(data);
    qDebug()<<response;
    emit this->response(response);
}
