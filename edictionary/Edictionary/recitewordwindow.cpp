#include "recitewordwindow.h"
#include "ui_recitewordwindow.h"

void RecitewordWindow::showEvent(QShowEvent *evt)
{
    //MyLog mylog;
    //mylog.print("************");
    if(num >= Testpaper.size()){
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("您已经背完了今天的所有单词");
        box->show();
        ui->uploadButton->setEnabled(1);
        ui->rememberButton->setEnabled(0);
        ui->forgetButton->setEnabled(0);
        ui->restButton->setEnabled(0);
        //this->close();
        //...如何找到上一个窗口
    }
    else{
        ui->numLabel->setText(QString::number(num + 1) + "/" + QString::number(Testpaper.size()));
        ui->wordEdit->setText(QString::fromStdString(Testpaper[num].Vocabulary));
    }
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

void RecitewordWindow::on_uploadButton_clicked()
{
    std::vector<mywordrecord> testinfo;
    Ediccon->GetTestInfo(Testpaper, testinfo);
    Ediccon->User->FinalSave(testinfo);
    Ediccon->User->TempSave(Testpaper);
    QMessageBox box(QMessageBox::NoIcon, "提示", tr("今日背单词信息上传成功"));
    box.setStandardButtons(QMessageBox::Ok);
    box.setButtonText(QMessageBox::Ok, "完成");
    box.exec();
    this->parentWidget()->show();
    this->close();
}
