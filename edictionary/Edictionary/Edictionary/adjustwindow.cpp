#include "adjustwindow.h"
#include "ui_adjustwindow.h"

void AdjustWindow::showEvent(QShowEvent *evt)
{
    ui->stralevBox->setValue(Ediccon->User->getStralev());
    ui->stranumBox->setValue(Ediccon->User->getStranum());
}

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
    /*QMessageBox box(QMessageBox::Warning, "修改设置成功", "修改设置成功", QMessageBox::NoButton, this);
    box.setStandardButtons(QMessageBox::Retry);
    box.setButtonText(QMessageBox::Retry, "完成");
    box.exec();*/
    QMessageBox *box;
    box = new QMessageBox(this);
    box->setWindowTitle("提示");
    box->setText("修改设置成功");
    box->show();
}

void AdjustWindow::on_retButton_clicked()
{
    this->close();
    this->parentWidget()->show();
}

void AdjustWindow::on_stralevBox_valueChanged(int arg1)
{
    if(arg1 < 1)
        ui->applyButton->setEnabled(0);
    if(arg1 > 2)
        ui->applyButton->setEnabled(0);
    if(arg1 >= 1 && arg1 <= 2)
        ui->applyButton->setEnabled(1);
}

void AdjustWindow::on_stranumBox_valueChanged(int arg1)
{
    if(arg1 < 10)
        ui->applyButton->setEnabled(0);
    if(arg1 > 99)
        ui->applyButton->setEnabled(0);
    if(arg1 >= 10 && arg1 <= 99)
        ui->applyButton->setEnabled(1);
}
