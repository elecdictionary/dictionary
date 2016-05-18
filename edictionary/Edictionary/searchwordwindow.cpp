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
    word = ui->wordlineEdit->text().toStdString();//the vocabulary
    ret = Ediccon->GetVocaList(word, vocainfo);
    std::vector<mysentences> Sentences;
    Ediccon->GetSentences(word, Sentences);
    if(ret == 1){
        ui->wordinfoEdit->setPlainText(QString::fromStdString(vocainfo.getVoca() + " " + vocainfo.getPronun() + " " + vocainfo.getCat() + " " + vocainfo.getChinese()));
        std::string allSentences = "";
        std::vector<mysentences>::iterator it;
        for(it = Sentences.begin(); it != Sentences.end(); it ++)
        {
            allSentences += (*it).English + "\n" + (*it).Chinese + "\n";
        }
         ui->sentencesEdit->setPlainText(QString::fromStdString(allSentences));
        //加入例句
    }
    else if(ret == 2){
        QMessageBox box(QMessageBox::NoIcon, "单词查询失败", tr("没有找到单词%1，请检查拼写是否正确").arg(QString::fromStdString(word)), QMessageBox::NoButton, this);
        box.setStandardButtons(QMessageBox::Retry);
        box.setButtonText(QMessageBox::Retry, "重试");
        box.exec();
    }
}



void SearchwordWindow::on_addsentencesButton_clicked()
{
    AddsentencesWindow *addsentencesWindow;
    addsentencesWindow = new AddsentencesWindow(Ediccon, this);
    addsentencesWindow->show();
    this->hide();
}
