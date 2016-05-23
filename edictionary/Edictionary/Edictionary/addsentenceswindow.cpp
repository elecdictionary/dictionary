#include "addsentenceswindow.h"
#include "ui_addsentenceswindow.h"

AddsentencesWindow::AddsentencesWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddsentencesWindow)
{
    ui->setupUi(this);
    Ediccon = Edic;
}

AddsentencesWindow::AddsentencesWindow(QString Vocabulary, ediccontroler *Edic, QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::AddsentencesWindow)
{
    ui->setupUi(this);
    Ediccon = Edic;
    ui->wordlineEdit->setText(Vocabulary);
}

AddsentencesWindow::~AddsentencesWindow()
{
    delete ui;
}

void AddsentencesWindow::on_returnButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void AddsentencesWindow::on_addsentencesButton_clicked()
{
    //MyLog mylog;
    if(ui->wordlineEdit->text() == ""){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("单词栏不能为空");
        box->show();
    }
    else if(ui->esentenceEdit->toPlainText() == ""){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("例句栏不能为空");
        box->show();
    }
    else if(ui->csentenceEdit->toPlainText() == ""){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("中文栏不能为空");
        box->show();
    }
    else if(!Ediccon->CheckWord(ui->wordlineEdit->text().toStdString())){
        //mylog.print(3);
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("例句添加失败");
        box->setText("词库中没有该单词，请确定拼写正确");
        box->show();
    }
    else if(Ediccon->User->AddSentences(ui->wordlineEdit->text().toStdString(), ui->esentenceEdit->toPlainText().toStdString(), ui->csentenceEdit->toPlainText().toStdString()))
    {
        //mylog.print(4);
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("添加例句成功");
        box->show();
        ui->wordlineEdit->setText("");
        ui->esentenceEdit->setPlainText("");
        ui->csentenceEdit->setPlainText("");
    }
}
