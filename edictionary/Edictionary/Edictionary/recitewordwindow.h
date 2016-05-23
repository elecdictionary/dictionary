#ifndef RECITEWORDWINDOW_H
#define RECITEWORDWINDOW_H

#include <QMainWindow>
#include <vector>
#include <QShowEvent>
#include "allstruct.h"
#include "ediccontroler.h"
#include "allstruct.h"
#include "vocabularyinfowindow.h"
#include "mylog.h"

namespace Ui {
class RecitewordWindow;
}

class RecitewordWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;
    std::vector<mywordrecord> Testpaper;
    int num;

protected:
    void showEvent(QShowEvent *evt);//判定是否背完单词并更新单词

public:
    explicit RecitewordWindow(std::vector<mywordrecord> *testpaper, ediccontroler *Edic, QWidget *parent = 0);
    ~RecitewordWindow();

private slots:
    void on_restButton_clicked();

    void on_forgetButton_clicked();

    void on_rememberButton_clicked();

    void on_uploadButton_clicked();

private:
    Ui::RecitewordWindow *ui;
};

#endif // RECITEWORDWINDOW_H
