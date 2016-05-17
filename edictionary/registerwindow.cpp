#include "registerwindow.h"
#include "ui_registerwindow.h"

RegisterWindow::RegisterWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    Ediccon = Edic;
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_ret_Button_clicked()
{
    this->close();
    this->parentWidget()->show();
}

void RegisterWindow::on_username_editingFinished()
{
    if(Ediccon->User->CheckUserName(ui->username->text().toStdString())){
        ui->checkBox->setChecked(1);
    }
    else{
        ui->checkBox->setChecked(0);
    }
}

void RegisterWindow::on_password_editingFinished()
{
    if(ui->password->text() != ""){
        ui->checkBox_2->setChecked(1);
    }
    else{
        ui->checkBox_2->setChecked(0);
    }
    if(ui->checkBox_2->checkState() && ui->password->text() == ui->password_2->text()){
        ui->checkBox_3->setChecked(1);
    }
    else{
        ui->checkBox_3->setChecked(0);
    }
}

void RegisterWindow::on_password_2_editingFinished()
{
    if(ui->checkBox_2->checkState() && ui->password->text() == ui->password_2->text()){
        ui->checkBox_3->setChecked(1);
    }
    else{
        ui->checkBox_3->setChecked(0);
    }
}

void RegisterWindow::on_registerButton_clicked()
{
    if(ui->checkBox->checkState() && ui->checkBox_2->checkState() && ui->checkBox_3->checkState()){
        Ediccon->User->UserRegister(ui->username->text().toStdString(), ui->password->text().toStdString());//注册用户
        QMessageBox box(QMessageBox::NoIcon, "用户注册成功", tr("用户%1注册成功，快开始背单词吧！").arg(ui->username->text()));
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok, "完成");
        box.exec();
        this->close();
        this->parentWidget()->show();
    }
}
