/********************************************************************************
** Form generated from reading UI file 'windowgrafic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWGRAFIC_H
#define UI_WINDOWGRAFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_windowgrafic
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *windowgrafic)
    {
        if (windowgrafic->objectName().isEmpty())
            windowgrafic->setObjectName(QString::fromUtf8("windowgrafic"));
        windowgrafic->resize(464, 346);
        label = new QLabel(windowgrafic);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 311, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineEdit = new QLineEdit(windowgrafic);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 70, 113, 20));
        lineEdit_2 = new QLineEdit(windowgrafic);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 110, 113, 20));
        lineEdit_3 = new QLineEdit(windowgrafic);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 150, 113, 20));
        lineEdit_4 = new QLineEdit(windowgrafic);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 190, 113, 20));
        pushButton = new QPushButton(windowgrafic);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 230, 81, 31));

        retranslateUi(windowgrafic);

        QMetaObject::connectSlotsByName(windowgrafic);
    } // setupUi

    void retranslateUi(QDialog *windowgrafic)
    {
        windowgrafic->setWindowTitle(QCoreApplication::translate("windowgrafic", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("windowgrafic", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\277\320\276\320\272\320\260\320\267\320\275\320\270\320\272\320\270 \320\264\320\273\321\217 \320\277\320\276\321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("windowgrafic", "\320\237\320\276\320\261\321\203\320\264\321\203\320\262\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class windowgrafic: public Ui_windowgrafic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWGRAFIC_H
