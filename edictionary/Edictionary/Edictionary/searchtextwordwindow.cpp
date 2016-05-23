#include "searchtextwordwindow.h"
#include "ui_searchtextwordwindow.h"

SearchTextWordWindow::SearchTextWordWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchTextWordWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
}

SearchTextWordWindow::~SearchTextWordWindow()
{
    delete ui;
}

void SearchTextWordWindow::on_returnButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void SearchTextWordWindow::on_searchButton_clicked()
{
    std::vector<std::string> wordlist;
    if(Ediccon->GetTextNewWorld(ui->textEdit->toPlainText().toStdString(), wordlist)){
        TextWordinfoWindow *textwordinfoWindow;
        textwordinfoWindow = new TextWordinfoWindow(&wordlist, Ediccon, this);
        textwordinfoWindow->show();
        this->hide();
    }
    else{
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("该篇文章中不存在生词");
        box->show();
    }
    //识别所有生词，特判没有生词
}
