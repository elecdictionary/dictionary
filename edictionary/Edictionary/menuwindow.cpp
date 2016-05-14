#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}
