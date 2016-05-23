#include "vocabularyinfowindow.h"
#include "ui_vocabularyinfowindow.h"

VocabularyInfoWindow::VocabularyInfoWindow(QString Vocabulary, ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VocabularyInfoWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);

    ui->wordlineEdit->setText(Vocabulary);
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

VocabularyInfoWindow::~VocabularyInfoWindow()
{
    delete ui;
}

void VocabularyInfoWindow::on_addsentencesButton_clicked()
{
    AddsentencesWindow *addsentencesWindow;
    addsentencesWindow = new AddsentencesWindow(ui->wordlineEdit->text(), Ediccon, this);
    addsentencesWindow->show();
    this->hide();
}

void VocabularyInfoWindow::on_returnButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
