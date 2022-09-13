#ifndef SERIALCTRL_H
#define SERIALCTRL_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QMutex>

class SerialCtrl : public QObject
{
    Q_OBJECT
public:

    //串口相关设置结构体
    struct Settings {
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        QSerialPort::DataBits dataBits;
        QString stringDataBits;
        QSerialPort::Parity parity;
        QString stringParity;
        QSerialPort::StopBits stopBits;
        QString stringStopBits;
        QSerialPort::FlowControl flowControl;
        QString stringFlowControl;
        bool localEchoEnabled;
    };


    SerialCtrl();
    //explicit SerialCtrl(QObject *parent = nullptr);
    QStringList getAvailablePortsName();

    void waitingMessage(const QString &portName, int waitTimeout);
    void closePort();
    void readData();


signals:
    void response(QString s);
    void error(QString s);
    void timeout(QString s);
    void tip(QString s);

private:
    QMutex mutex;
    QSerialPort* serial;

};

#endif // SERIALCTRL_H
