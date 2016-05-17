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

void MenuWindow::on_settingButton_clicked()
{
    AdjustWindow *adjustWindow;
    adjustWindow = new AdjustWindow(Ediccon, this);
    adjustWindow->show();
    this->hide();
}
