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

class Ui_Form
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *name;
    QLineEdit *line_name;
    QLabel *section;
    QLineEdit *line_section;
    QLabel *session;
    QLineEdit *line_session;
    QLabel *branch;
    QLineEdit *line_branch;
    QLabel *roll;
    QLineEdit *line_roll;
    QLabel *email;
    QLineEdit *line_email;
    QPushButton *submit;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(800, 600);
        centralwidget = new QWidget(Form);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 791, 541));
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
        name->setCursor(QCursor(Qt::ArrowCursor));

        formLayout->setWidget(0, QFormLayout::LabelRole, name);

        line_name = new QLineEdit(formLayoutWidget);
        line_name->setObjectName(QString::fromUtf8("line_name"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_name->sizePolicy().hasHeightForWidth());
        line_name->setSizePolicy(sizePolicy);
        line_name->setAutoFillBackground(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, line_name);

        section = new QLabel(formLayoutWidget);
        section->setObjectName(QString::fromUtf8("section"));
        section->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, section);

        line_section = new QLineEdit(formLayoutWidget);
        line_section->setObjectName(QString::fromUtf8("line_section"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_section);

        session = new QLabel(formLayoutWidget);
        session->setObjectName(QString::fromUtf8("session"));
        session->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, session);

        line_session = new QLineEdit(formLayoutWidget);
        line_session->setObjectName(QString::fromUtf8("line_session"));

        formLayout->setWidget(2, QFormLayout::FieldRole, line_session);

        branch = new QLabel(formLayoutWidget);
        branch->setObjectName(QString::fromUtf8("branch"));
        branch->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, branch);

        line_branch = new QLineEdit(formLayoutWidget);
        line_branch->setObjectName(QString::fromUtf8("line_branch"));

        formLayout->setWidget(3, QFormLayout::FieldRole, line_branch);

        roll = new QLabel(formLayoutWidget);
        roll->setObjectName(QString::fromUtf8("roll"));
        roll->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, roll);

        line_roll = new QLineEdit(formLayoutWidget);
        line_roll->setObjectName(QString::fromUtf8("line_roll"));

        formLayout->setWidget(4, QFormLayout::FieldRole, line_roll);

        email = new QLabel(formLayoutWidget);
        email->setObjectName(QString::fromUtf8("email"));
        email->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, email);

        line_email = new QLineEdit(formLayoutWidget);
        line_email->setObjectName(QString::fromUtf8("line_email"));

        formLayout->setWidget(5, QFormLayout::FieldRole, line_email);

        submit = new QPushButton(formLayoutWidget);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, submit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(6, QFormLayout::LabelRole, horizontalSpacer);

        Form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Form);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Form->setMenuBar(menubar);
        statusbar = new QStatusBar(Form);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Form->setStatusBar(statusbar);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QMainWindow *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        name->setText(QCoreApplication::translate("Form", "Name", nullptr));
        section->setText(QCoreApplication::translate("Form", "Section", nullptr));
        session->setText(QCoreApplication::translate("Form", "Session", nullptr));
        branch->setText(QCoreApplication::translate("Form", "Branch", nullptr));
        roll->setText(QCoreApplication::translate("Form", "Roll no.", nullptr));
        email->setText(QCoreApplication::translate("Form", "E-Mail", nullptr));
        submit->setText(QCoreApplication::translate("Form", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
