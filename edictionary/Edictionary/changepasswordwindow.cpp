#include "changepasswordwindow.h"
#include "ui_changepasswordwindow.h"

ChangePasswordWindow::ChangePasswordWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChangePasswordWindow)
{
    ui->setupUi(this);
    Ediccon = Edic;
}

ChangePasswordWindow::~ChangePasswordWindow()
{
    delete ui;
}

void ChangePasswordWindow::on_returnButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void ChangePasswordWindow::on_applyButton_clicked()
{
    if(ui->passwordEdit->text() == ""){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("新密码栏不能为空");
        box->show();
    }
    else if(ui->passwordEdit->text() != ui->passwordEdit_2->text()){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("两次新密码输入不一致");
        box->show();
    }
    else if(Ediccon->User->ChangePassword(ui->formalpasswordEdit->text().toStdString(), ui->passwordEdit->text().toStdString())){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("修改密码成功");
        box->show();
    }
    else{
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("原密码错误");
        box->show();
    }
}
