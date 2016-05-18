#include "recitewordwindow.h"
#include "ui_recitewordwindow.h"

RecitewordWindow::RecitewordWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecitewordWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
}

RecitewordWindow::~RecitewordWindow()
{
    delete ui;
}
