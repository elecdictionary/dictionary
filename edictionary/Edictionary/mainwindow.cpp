#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(ediccontroler* Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    if(ui->userName->text() != "" && Ediccon->User->Login(ui->userName->text().toStdString(), ui->password->text().toStdString())){
        MenuWindow *menuWindow;
        menuWindow = new MenuWindow(Ediccon, this);
        this->hide();
        menuWindow->show();
    }
    else{
        QMessageBox box(QMessageBox::Warning, "用户登录失败", tr("用户名或密码错误"));
        box.setStandardButtons(QMessageBox::Retry);
        box.setButtonText(QMessageBox::Retry, "重试");
        box.exec();
    }
}


void MainWindow::on_registerButton_clicked()
{

    RegisterWindow *registerWindow;
    registerWindow = new RegisterWindow(Ediccon, this);
    this->hide();
    registerWindow->show();
}
