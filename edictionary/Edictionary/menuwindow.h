#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "ediccontroler.h"
#include "adjustwindow.h"
#include "searchwordwindow.h"
#include "recitewordwindow.h"
#include "changepasswordwindow.h"
#include "searchtextwordwindow.h"
#include "allstruct.h"
#include "mylog.h"

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit MenuWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~MenuWindow();

private slots:
    void on_settingButton_clicked();

    void on_searchwordButton_clicked();

    void on_reciteButton_clicked();

    void on_adjpasswordButton_clicked();

    void on_logoutButton_clicked();

    void on_textsearchButton_clicked();

private:
    Ui::MenuWindow *ui;
};

#endif // MENUWINDOW_H
