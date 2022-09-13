#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "serialctrl.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QThread *serialThread;

    void startTransaction();

    void displayResponse(QString s);

    void error(QString s);

signals:
    void startSignal(QString portName, int timeOut);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
