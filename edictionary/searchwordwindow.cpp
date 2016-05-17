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

void SearchwordWindow::on_returnButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void SearchwordWindow::on_searchButton_clicked()
{
    int ret;
    std::string word;
    wordnote vocainfo;
    word = ui->wordlineEdit->text().toStdString();
    ret = Ediccon->GetVocaList(word, vocainfo);
    if(ret == 1){
        ui->wordinfoEdit->setPlainText(QString::fromStdString(vocainfo.getVoca() + " " + vocainfo.getPronun() + " " + vocainfo.getCat() + " " + vocainfo.getChinese()));
        //...加入例句
    }
    else if(ret == 2){
        QMessageBox box(QMessageBox::NoIcon, "单词查询失败", tr("没有找到%1单词，请检查拼写是否正确").arg(QString::fromStdString(word)));
        box.setStandardButtons(QMessageBox::Retry);
        box.setButtonText(QMessageBox::Retry, "重试");
        box.exec();
    }
}
