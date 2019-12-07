/********************************************************************************
** Form generated from reading UI file 'whichcolor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHICHCOLOR_H
#define UI_WHICHCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_WhichColor
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *WhichColor)
    {
        if (WhichColor->objectName().isEmpty())
            WhichColor->setObjectName(QString::fromUtf8("WhichColor"));
        WhichColor->resize(263, 206);
        radioButton = new QRadioButton(WhichColor);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(50, 70, 101, 41));
        radioButton_2 = new QRadioButton(WhichColor);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 100, 101, 41));
        label = new QLabel(WhichColor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 221, 16));
        pushButton = new QPushButton(WhichColor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 150, 75, 23));

        retranslateUi(WhichColor);

        QMetaObject::connectSlotsByName(WhichColor);
    } // setupUi

    void retranslateUi(QDialog *WhichColor)
    {
        WhichColor->setWindowTitle(QApplication::translate("WhichColor", "Dialog", nullptr));
        radioButton->setText(QApplication::translate("WhichColor", "\346\210\221\350\246\201\346\211\247\351\273\221\346\243\213", nullptr));
        radioButton_2->setText(QApplication::translate("WhichColor", "\346\210\221\350\246\201\346\211\247\347\231\275\346\243\213", nullptr));
        label->setText(QApplication::translate("WhichColor", "\350\257\267\351\200\211\346\213\251\344\275\240\346\211\200\350\246\201\346\211\247\346\243\213\345\255\220\347\232\204\351\242\234\350\211\262\357\274\210\351\273\221\346\243\213\345\205\210\350\241\214\357\274\211", nullptr));
        pushButton->setText(QApplication::translate("WhichColor", "\346\210\221\351\200\211\345\245\275\344\272\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WhichColor: public Ui_WhichColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHICHCOLOR_H
