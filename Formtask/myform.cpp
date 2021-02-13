#include "myform.h"
#include "ui_myform.h"

myform::myform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myform)
{
    ui->setupUi(this);
}


myform::~myform()
{
    delete ui;
}
void myform::Display(QString final){
    ui->formoutput->setText(final);

}
