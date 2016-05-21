#include "recitewordwindow.h"
#include "ui_recitewordwindow.h"

void RecitewordWindow::showEvent(QEvent *event)
{
    /*
    MyLog mylog;
    mylog.print("************");
    if(num >= Testpaper.size()){
        std::vector<mywordrecord> testinfo;
        Ediccon->GetTestInfo(Testpaper, testinfo);
        Ediccon->User->FinalSave(testinfo);
        QMessageBox box(QMessageBox::Information, "提示", tr("您已经背完了今天的单词"));
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok, "完成");
        box.exec();
        this->close();
    }
    else{
        ui->wordEdit->setText(QString::fromStdString(Testpaper[num].Vocabulary));
    }*/
}

RecitewordWindow::RecitewordWindow(std::vector<mywordrecord> *testpaper, ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecitewordWindow)
{
    //MyLog mylog;
    //mylog.print(0);

    Ediccon = Edic;
    ui->setupUi(this);

    //mylog.print(1);
    Testpaper = *testpaper;
    //mylog.print(Testpaper);
    num = 0;
    //mylog.print(2);
    for(auto i : Testpaper)
    {
        if(i.Record)
            num ++;
        else
            break;
    }
   // mylog.print(3);
    //mylog.print(Testpaper.size());
    ui->wordEdit->setText(QString::fromStdString(Testpaper[0].Vocabulary));
   // mylog.print(4);
}

RecitewordWindow::~RecitewordWindow()
{
    delete ui;
}

void RecitewordWindow::on_restButton_clicked()
{
    //MyLog mylog;
    //mylog.print(Testpaper);
    //mylog.print(Testpaper.size());
    Ediccon->User->TempSave(Testpaper);
    //mylog.print(Testpaper.size());
    this->parentWidget()->show();
    this->close();
}

void RecitewordWindow::on_forgetButton_clicked()
{
    Testpaper.push_back(Testpaper[num]);
    Testpaper[num].Record = 1;
    num ++;
    VocabularyInfoWindow *vocabularyinfoWindow;
    vocabularyinfoWindow = new VocabularyInfoWindow(ui->wordEdit->text(), Ediccon, this);
    vocabularyinfoWindow->show();
    this->hide();
}

void RecitewordWindow::on_rememberButton_clicked()
{
    Testpaper[num].Record = 1;
    num ++;;
    VocabularyInfoWindow *vocabularyinfoWindow;
    vocabularyinfoWindow = new VocabularyInfoWindow(ui->wordEdit->text(), Ediccon, this);
    vocabularyinfoWindow->show();
    this->hide();
}
