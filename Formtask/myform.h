#ifndef MYFORM_H
#define MYFORM_H

#include <QDialog>

namespace Ui {
class myform;
}

class myform : public QDialog
{
    Q_OBJECT

public:
    explicit myform(QWidget *parent = nullptr);
    ~myform();
    void Display(QString);

private:
    Ui::myform *ui;

};

#endif // MYFORM_H
