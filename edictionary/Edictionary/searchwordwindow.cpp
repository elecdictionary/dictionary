#include "searchwordwindow.h"
#include "ui_searchwordwindow.h"

SearchwordWindow::SearchwordWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchwordWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
}

SearchwordWindow::~SearchwordWindow()
{
    delete ui;
}

void SearchwordWindow::on_pushButton_clicked()
{

}
