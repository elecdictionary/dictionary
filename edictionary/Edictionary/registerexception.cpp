#include "registerexception.h"
#include "ui_registerexception.h"

RegisterException::RegisterException(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterException)
{
    ui->setupUi(this);
}

RegisterException::~RegisterException()
{
    delete ui;
}
