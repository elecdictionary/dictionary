#include "adjustwindow.h"
#include "ui_adjustwindow.h"

AdjustWindow::AdjustWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdjustWindow)
{
    ui->setupUi(this);
    Ediccon = Edic;
}

AdjustWindow::~AdjustWindow()
{
    delete ui;
}

void AdjustWindow::on_applyButton_clicked()
{
    Ediccon->User->AdjSettings(ui->stranumBox->value(), ui->stralevBox->value());//修改设置
    QMessageBox box(QMessageBox::NoIcon, "修改设置成功", "");
    box.setStandardButtons(QMessageBox::Ok);
    box.setButtonText(QMessageBox::Ok, "完成");
    box.exec();
}

void AdjustWindow::on_retButton_clicked()
{
    this->close();
    this->parentWidget()->show();
}
