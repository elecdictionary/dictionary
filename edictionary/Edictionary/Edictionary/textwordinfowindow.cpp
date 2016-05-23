#include "textwordinfowindow.h"
#include "ui_textwordinfowindow.h"

TextWordinfoWindow::TextWordinfoWindow(std::vector<std::string> *wordlist, ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TextWordinfoWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
    Wordlist = *wordlist;

    num = 0;
    ui->wordlineEdit->setText(QString::fromStdString(Wordlist[num]));
    int ret;
    std::string word;
    wordnote vocainfo;
    word = ui->wordlineEdit->text().toStdString();//the vocabulary
    ret = Ediccon->GetVocaList(word, vocainfo);
    std::vector<mysentences> Sentences;
    Ediccon->GetSentences(word, Sentences);
    ui->wordinfoEdit->setPlainText(QString::fromStdString(vocainfo.getVoca() + " " + vocainfo.getPronun() + " " + vocainfo.getCat() + vocainfo.getChinese()));
    std::string allSentences = "";
    std::vector<mysentences>::iterator it;
    for(it = Sentences.begin(); it != Sentences.end(); it ++)
    {
        allSentences += (*it).English + "\n" + (*it).Chinese + "\n";
    }
    ui->sentencesEdit->setPlainText(QString::fromStdString(allSentences));
    //写入单词信息
}

TextWordinfoWindow::~TextWordinfoWindow()
{
    delete ui;
}

void TextWordinfoWindow::on_addsentencesButton_clicked()
{
    AddsentencesWindow *addsentencesWindow;
    addsentencesWindow = new AddsentencesWindow(ui->wordlineEdit->text(), Ediccon, this);
    addsentencesWindow->show();
    this->hide();
}

void TextWordinfoWindow::on_returnButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void TextWordinfoWindow::on_nextButton_clicked()
{
    num ++;
    if(num >= Wordlist.size()){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("已经是最后一个单词了");
        box->show();
        num --;
    }
    else{
        ui->wordlineEdit->setText(QString::fromStdString(Wordlist[num]));
        int ret;
        std::string word;
        wordnote vocainfo;
        word = ui->wordlineEdit->text().toStdString();//the vocabulary
        ret = Ediccon->GetVocaList(word, vocainfo);
        std::vector<mysentences> Sentences;
        Ediccon->GetSentences(word, Sentences);
        ui->wordinfoEdit->setPlainText(QString::fromStdString(vocainfo.getVoca() + " " + vocainfo.getPronun() + " " + vocainfo.getCat() + vocainfo.getChinese()));
        std::string allSentences = "";
        std::vector<mysentences>::iterator it;
        for(it = Sentences.begin(); it != Sentences.end(); it ++)
        {
            allSentences += (*it).English + "\n" + (*it).Chinese + "\n";
        }
        ui->sentencesEdit->setPlainText(QString::fromStdString(allSentences));
        //写入单词信息
    }
}

void TextWordinfoWindow::on_pushButton_clicked()
{
    num --;
    if(num < 0){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("已经是第一个单词了");
        box->show();
        num ++;
    }
    else{
        ui->wordlineEdit->setText(QString::fromStdString(Wordlist[num]));
        int ret;
        std::string word;
        wordnote vocainfo;
        word = ui->wordlineEdit->text().toStdString();//the vocabulary
        ret = Ediccon->GetVocaList(word, vocainfo);
        std::vector<mysentences> Sentences;
        Ediccon->GetSentences(word, Sentences);
        ui->wordinfoEdit->setPlainText(QString::fromStdString(vocainfo.getVoca() + " " + vocainfo.getPronun() + " " + vocainfo.getCat() + " " + vocainfo.getChinese()));
        std::string allSentences = "";
        std::vector<mysentences>::iterator it;
        for(it = Sentences.begin(); it != Sentences.end(); it ++)
        {
            allSentences += (*it).English + "\n" + (*it).Chinese + "\n";
        }
        ui->sentencesEdit->setPlainText(QString::fromStdString(allSentences));
        //写入单词信息
    }
}
