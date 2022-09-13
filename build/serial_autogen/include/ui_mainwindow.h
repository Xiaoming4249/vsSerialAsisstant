/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *baudrateSelect_comboBox;
    QComboBox *portSelect_comboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *utf8_rbtn;
    QRadioButton *hex_rbtn;
    QRadioButton *gbk_rbtn;
    QLabel *label_2;
    QPushButton *close_btn;
    QPushButton *start_btn;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(708, 305);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        baudrateSelect_comboBox = new QComboBox(widget);
        baudrateSelect_comboBox->setObjectName(QStringLiteral("baudrateSelect_comboBox"));

        gridLayout->addWidget(baudrateSelect_comboBox, 1, 1, 1, 1);

        portSelect_comboBox = new QComboBox(widget);
        portSelect_comboBox->setObjectName(QStringLiteral("portSelect_comboBox"));

        gridLayout->addWidget(portSelect_comboBox, 0, 1, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        utf8_rbtn = new QRadioButton(groupBox);
        utf8_rbtn->setObjectName(QStringLiteral("utf8_rbtn"));

        verticalLayout->addWidget(utf8_rbtn);

        hex_rbtn = new QRadioButton(groupBox);
        hex_rbtn->setObjectName(QStringLiteral("hex_rbtn"));

        verticalLayout->addWidget(hex_rbtn);

        gbk_rbtn = new QRadioButton(groupBox);
        gbk_rbtn->setObjectName(QStringLiteral("gbk_rbtn"));

        verticalLayout->addWidget(gbk_rbtn);


        gridLayout->addWidget(groupBox, 3, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        close_btn = new QPushButton(widget);
        close_btn->setObjectName(QStringLiteral("close_btn"));

        gridLayout->addWidget(close_btn, 2, 1, 1, 1);

        start_btn = new QPushButton(widget);
        start_btn->setObjectName(QStringLiteral("start_btn"));
        start_btn->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(start_btn, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);


        horizontalLayout->addWidget(widget);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(175, 255, 207);"));

        horizontalLayout->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\240\274\345\274\217\357\274\232", Q_NULLPTR));
        baudrateSelect_comboBox->clear();
        baudrateSelect_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
        );
        groupBox->setTitle(QString());
        utf8_rbtn->setText(QApplication::translate("MainWindow", "utf-8", Q_NULLPTR));
        hex_rbtn->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266", Q_NULLPTR));
        gbk_rbtn->setText(QApplication::translate("MainWindow", "GBK", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        close_btn->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", Q_NULLPTR));
        start_btn->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\344\270\262\345\217\243", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
