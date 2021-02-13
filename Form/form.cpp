#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}


void Form::on_submit_clicked()
{
    QString name = ui->line_name->text();
    QString roll = ui->line_roll->text();
    QString section = ui->line_section->text();
    QString session = ui->line_session->text();
    QString branch = ui->line_branch->text();
    QString email = ui->line_email->text();

}
