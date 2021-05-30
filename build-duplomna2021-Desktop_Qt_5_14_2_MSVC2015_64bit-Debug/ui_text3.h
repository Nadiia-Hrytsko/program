/********************************************************************************
** Form generated from reading UI file 'text3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT3_H
#define UI_TEXT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_text3
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *text3)
    {
        if (text3->objectName().isEmpty())
            text3->setObjectName(QString::fromUtf8("text3"));
        text3->resize(557, 430);
        label = new QLabel(text3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 351, 41));
        label_2 = new QLabel(text3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 471, 291));
        pushButton = new QPushButton(text3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 380, 75, 23));

        retranslateUi(text3);

        QMetaObject::connectSlotsByName(text3);
    } // setupUi

    void retranslateUi(QDialog *text3)
    {
        text3->setWindowTitle(QCoreApplication::translate("text3", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("text3", "\320\232\321\200\320\270\321\202\320\265\321\200\321\226\320\271 \320\221\320\265\321\200\320\275\321\203\320\273\320\273\321\226", nullptr));
        label_2->setText(QCoreApplication::translate("text3", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("text3", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class text3: public Ui_text3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT3_H
