/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(793, 476);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 731, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 60, 461, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 210, 191, 61));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255)"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 130, 511, 61));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(168, 56, 84)"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 130, 191, 61));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255)"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 210, 511, 61));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(162, 81, 243)"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 290, 731, 61));
        pushButton_5->setFont(font3);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(203, 135, 0)"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 793, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \320\277\321\200\320\270\320\271\320\275\321\217\321\202\321\202\321\217  \321\200\321\226\321\210\320\265\320\275\321\214 \320\262 \321\203\320\274\320\276\320\262\320\260\321\205 \321\226\320\275\320\262\320\265\321\201\321\202\320\270\321\206\321\226\320\271\320\275\320\276\320\263\320\276 \321\200\320\270\320\267\320\270\320\272\321\203\n"
"", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\276\320\264\320\275\321\203 \321\226\320\267 \321\201\320\270\321\201\321\202\320\265\320\274 \320\264\320\273\321\217 \321\200\320\276\320\267\321\200\320\260\321\205\321\203\320\275\320\272\321\203 \321\226\320\275\320\262\320\265\321\201\321\202\320\270\321\206\321\226\320\271\320\275\320\276\320\263\320\276 \321\200\320\270\320\267\320\270\320\272\321\203:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\321\226\320\271 \320\221\320\265\321\200\320\275\321\203\320\273\320\273\321\226", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\321\226\320\271 \321\201\320\265\321\200\320\265\320\264\320\275\321\214\320\276\320\263\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \321\226 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\320\276\320\263\320\276 \320\262\321\226\320\264\321\205\320\270\320\273\320\265\320\275\320\275\321\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\270\320\273\320\276 \320\221\320\260\320\271\321\224\321\201\320\260 ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\261\321\226\321\200 \320\277\321\200\320\270 \320\262\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217\321\205 \320\264\320\276\321\205\320\276\320\264\321\226\320\262 \321\226 \n"
"\320\267\320\261\320\270\321\202\320\272\321\226\320\262 \321\202\320\260 \320\271\320\274\320\276\320\262\321\226\321\200\320\275\320\276\321\201\321\202\321\226 \321\227\321\205 \320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\275\321\217", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\264\320\273\321\217 \320\262\320\270\320\261\320\276\321\200\321\203 \320\275\320\260\320\271\320\272\321\200\320\260\321\211\320\276\320\263\320\276 \321\200\321\226\321\210\320\265\320\275\320\275\321\217 \320\264\320\273\321\217 \320\272\320\260\320\277\321\226\321\202\320\260\320\273\320\276\320\262\320\272\320\273\320\260\320\264\320\265\320\275\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
