/********************************************************************************
** Form generated from reading UI file 'myform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_myform
{
public:
    QLabel *formoutput;

    void setupUi(QDialog *myform)
    {
        if (myform->objectName().isEmpty())
            myform->setObjectName(QString::fromUtf8("myform"));
        myform->resize(400, 300);
        formoutput = new QLabel(myform);
        formoutput->setObjectName(QString::fromUtf8("formoutput"));
        formoutput->setGeometry(QRect(40, 20, 311, 261));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        formoutput->setFont(font);

        retranslateUi(myform);

        QMetaObject::connectSlotsByName(myform);
    } // setupUi

    void retranslateUi(QDialog *myform)
    {
        myform->setWindowTitle(QCoreApplication::translate("myform", "Dialog", nullptr));
        formoutput->setText(QCoreApplication::translate("myform", "FormOutput", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myform: public Ui_myform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
