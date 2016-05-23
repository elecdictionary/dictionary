#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_settingButton_clicked()
{
    AdjustWindow *adjustWindow;
    adjustWindow = new AdjustWindow(Ediccon, this);
    adjustWindow->show();
    this->hide();
}

void MenuWindow::on_searchwordButton_clicked()
{
    SearchwordWindow *searchwordWindow;
    searchwordWindow = new SearchwordWindow(Ediccon, this);
    searchwordWindow->show();
    this->hide();
}

void MenuWindow::on_reciteButton_clicked()
{
    //MyLog mylog;
    std::vector<mywordrecord> testpaper;
    //mylog.print(0);
    if(Ediccon->GetTestPaper(testpaper)){
        //mylog.print(1);
        RecitewordWindow *recitewordWindow;
        recitewordWindow = new RecitewordWindow(&testpaper, Ediccon, this);
        //mylog.print(2);
        recitewordWindow->show();
        this->hide();
        //mylog.print(3);
    }
    else{
        //mylog.print(2);
        QMessageBox *box;
        box = new QMessageBox(this);
        box->setWindowTitle("提示");
        box->setText("您今天已经背完单词了，请明天再来");
        box->show();
    }
}

void MenuWindow::on_adjpasswordButton_clicked()
{
    ChangePasswordWindow *changepassowrdWindow;
    changepassowrdWindow = new ChangePasswordWindow(Ediccon, this);
    changepassowrdWindow->show();
    this->hide();
}

void MenuWindow::on_logoutButton_clicked()
{
    Ediccon->User->Logout();
    this->parentWidget()->show();
    this->close();
}

void MenuWindow::on_textsearchButton_clicked()
{
    SearchTextWordWindow *searchtextwordWindow;
    searchtextwordWindow = new SearchTextWordWindow(Ediccon, this);
    searchtextwordWindow->show();
    this->hide();
}
