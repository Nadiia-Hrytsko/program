/********************************************************************************
** Form generated from reading UI file 'text2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT2_H
#define UI_TEXT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_text2
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *text2)
    {
        if (text2->objectName().isEmpty())
            text2->setObjectName(QString::fromUtf8("text2"));
        text2->resize(545, 420);
        label = new QLabel(text2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 431, 61));
        label_2 = new QLabel(text2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 471, 281));
        pushButton = new QPushButton(text2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 370, 75, 23));

        retranslateUi(text2);

        QMetaObject::connectSlotsByName(text2);
    } // setupUi

    void retranslateUi(QDialog *text2)
    {
        text2->setWindowTitle(QCoreApplication::translate("text2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("text2", "\320\232\321\200\320\270\321\202\320\265\321\200\321\226\320\271 \321\201\320\265\321\200\320\265\320\264\320\275\321\214\320\276\320\263\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \321\226 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\320\276\320\263\320\276 \320\262\321\226\320\264\321\205\320\270\320\273\320\265\320\275\320\275\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("text2", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("text2", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class text2: public Ui_text2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT2_H
