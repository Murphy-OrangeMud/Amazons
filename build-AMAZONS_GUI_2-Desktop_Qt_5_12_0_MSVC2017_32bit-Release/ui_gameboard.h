/********************************************************************************
** Form generated from reading UI file 'gameboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARD_H
#define UI_GAMEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gameboard
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Gameboard)
    {
        if (Gameboard->objectName().isEmpty())
            Gameboard->setObjectName(QString::fromUtf8("Gameboard"));
        Gameboard->resize(641, 499);
        pushButton = new QPushButton(Gameboard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 20, 75, 23));
        pushButton_2 = new QPushButton(Gameboard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 60, 75, 23));
        label = new QLabel(Gameboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 100, 161, 20));
        label_2 = new QLabel(Gameboard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(460, 120, 171, 21));
        label_3 = new QLabel(Gameboard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 150, 54, 12));

        retranslateUi(Gameboard);

        QMetaObject::connectSlotsByName(Gameboard);
    } // setupUi

    void retranslateUi(QWidget *Gameboard)
    {
        Gameboard->setWindowTitle(QApplication::translate("Gameboard", "Form", nullptr));
        pushButton->setText(QApplication::translate("Gameboard", "\346\202\224\346\243\213", nullptr));
        pushButton_2->setText(QApplication::translate("Gameboard", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("Gameboard", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Gameboard", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Gameboard", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gameboard: public Ui_Gameboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H
