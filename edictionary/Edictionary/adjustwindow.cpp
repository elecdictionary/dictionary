#include "adjustwindow.h"
#include "ui_adjustwindow.h"

AdjustWindow::AdjustWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdjustWindow)
{
    ui->setupUi(this);
}

AdjustWindow::~AdjustWindow()
{
    delete ui;
}
