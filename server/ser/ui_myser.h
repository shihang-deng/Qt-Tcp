/********************************************************************************
** Form generated from reading UI file 'myser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSER_H
#define UI_MYSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MySer
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *START_BTN;

    void setupUi(QDialog *MySer)
    {
        if (MySer->objectName().isEmpty())
            MySer->setObjectName(QString::fromUtf8("MySer"));
        MySer->resize(640, 480);
        plainTextEdit = new QPlainTextEdit(MySer);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(50, 30, 381, 381));
        START_BTN = new QPushButton(MySer);
        START_BTN->setObjectName(QString::fromUtf8("START_BTN"));
        START_BTN->setGeometry(QRect(470, 50, 131, 51));

        retranslateUi(MySer);

        QMetaObject::connectSlotsByName(MySer);
    } // setupUi

    void retranslateUi(QDialog *MySer)
    {
        MySer->setWindowTitle(QApplication::translate("MySer", "MySer", nullptr));
        START_BTN->setText(QApplication::translate("MySer", "\345\274\200\345\247\213\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySer: public Ui_MySer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSER_H
