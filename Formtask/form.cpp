#include "form.h"
#include "ui_form.h"
#include "myform.h"
#include "iostream"

form::form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::form)
{
    ui->setupUi(this);
}

form::~form()
{
    delete ui;
}


void form::on_submit_clicked()
{
    QString name = ui->lineEdit_name->text();
    /*static_cast<QMainWindow*>(parent())->setLabelText(name);*/
    /*QMainWindow* window=dynamic_cast<QMainWindow*>(parent());
    if(!window){
        throw std::runtime_error{"Parent was not a Mainwindow"};
    }
    window->setLabelText(name);*/
    QString roll = ui->lineEdit_roll->text();
    QString section = ui->lineEdit_section->text();
    QString session = ui->lineEdit_session->text();
    QString branch = ui->lineEdit_branch->text();
    QString email = ui->lineEdit_mail->text();

    QString final = name+'\n'+roll+'\n'+section+'\n'+session+'\n'+branch+'\n'+email;


    myform myForm;
    myForm.setModal(true);
    myForm.Display(final);
    myForm.exec();


}
