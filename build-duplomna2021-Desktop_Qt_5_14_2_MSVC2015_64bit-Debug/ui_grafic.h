/********************************************************************************
** Form generated from reading UI file 'grafic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC_H
#define UI_GRAFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_grafic
{
public:
    QFrame *frame;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *grafic)
    {
        if (grafic->objectName().isEmpty())
            grafic->setObjectName(QString::fromUtf8("grafic"));
        grafic->resize(870, 546);
        frame = new QFrame(grafic);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 90, 831, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalFrame = new QFrame(frame);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(20, 10, 811, 401));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        retranslateUi(grafic);

        QMetaObject::connectSlotsByName(grafic);
    } // setupUi

    void retranslateUi(QDialog *grafic)
    {
        grafic->setWindowTitle(QCoreApplication::translate("grafic", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grafic: public Ui_grafic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC_H
