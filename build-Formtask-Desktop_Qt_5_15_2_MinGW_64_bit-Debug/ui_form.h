/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *name;
    QLineEdit *lineEdit_name;
    QLabel *roll;
    QLineEdit *lineEdit_roll;
    QLabel *section;
    QLineEdit *lineEdit_section;
    QLabel *session;
    QLineEdit *lineEdit_session;
    QLabel *branch;
    QLineEdit *lineEdit_branch;
    QLabel *email;
    QLineEdit *lineEdit_mail;
    QSpacerItem *horizontalSpacer;
    QPushButton *submit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *form)
    {
        if (form->objectName().isEmpty())
            form->setObjectName(QString::fromUtf8("form"));
        form->resize(800, 600);
        centralwidget = new QWidget(form);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 791, 471));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        name->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, name);

        lineEdit_name = new QLineEdit(formLayoutWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_name);

        roll = new QLabel(formLayoutWidget);
        roll->setObjectName(QString::fromUtf8("roll"));
        roll->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, roll);

        lineEdit_roll = new QLineEdit(formLayoutWidget);
        lineEdit_roll->setObjectName(QString::fromUtf8("lineEdit_roll"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_roll);

        section = new QLabel(formLayoutWidget);
        section->setObjectName(QString::fromUtf8("section"));
        section->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, section);

        lineEdit_section = new QLineEdit(formLayoutWidget);
        lineEdit_section->setObjectName(QString::fromUtf8("lineEdit_section"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_section);

        session = new QLabel(formLayoutWidget);
        session->setObjectName(QString::fromUtf8("session"));
        session->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, session);

        lineEdit_session = new QLineEdit(formLayoutWidget);
        lineEdit_session->setObjectName(QString::fromUtf8("lineEdit_session"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_session);

        branch = new QLabel(formLayoutWidget);
        branch->setObjectName(QString::fromUtf8("branch"));
        branch->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, branch);

        lineEdit_branch = new QLineEdit(formLayoutWidget);
        lineEdit_branch->setObjectName(QString::fromUtf8("lineEdit_branch"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_branch);

        email = new QLabel(formLayoutWidget);
        email->setObjectName(QString::fromUtf8("email"));
        email->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, email);

        lineEdit_mail = new QLineEdit(formLayoutWidget);
        lineEdit_mail->setObjectName(QString::fromUtf8("lineEdit_mail"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_mail);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(6, QFormLayout::LabelRole, horizontalSpacer);

        submit = new QPushButton(formLayoutWidget);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, submit);

        form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(form);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        form->setMenuBar(menubar);
        statusbar = new QStatusBar(form);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        form->setStatusBar(statusbar);

        retranslateUi(form);

        QMetaObject::connectSlotsByName(form);
    } // setupUi

    void retranslateUi(QMainWindow *form)
    {
        form->setWindowTitle(QCoreApplication::translate("form", "form", nullptr));
        name->setText(QCoreApplication::translate("form", "Name", nullptr));
        roll->setText(QCoreApplication::translate("form", "Roll no.", nullptr));
        section->setText(QCoreApplication::translate("form", "Section", nullptr));
        session->setText(QCoreApplication::translate("form", "Session", nullptr));
        branch->setText(QCoreApplication::translate("form", "Branch", nullptr));
        email->setText(QCoreApplication::translate("form", "E-mail", nullptr));
        submit->setText(QCoreApplication::translate("form", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form: public Ui_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
