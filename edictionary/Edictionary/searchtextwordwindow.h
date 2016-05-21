#ifndef SEARCHTEXTWORDWINDOW_H
#define SEARCHTEXTWORDWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <vector>
#include <string>
#include "textwordinfowindow.h"
#include "ediccontroler.h"
#include "wordnote.h"
#include "allstruct.h"

namespace Ui {
class SearchTextWordWindow;
}

class SearchTextWordWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit SearchTextWordWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~SearchTextWordWindow();

private slots:
    void on_returnButton_clicked();

    void on_searchButton_clicked();

private:
    Ui::SearchTextWordWindow *ui;
};

#endif // SEARCHTEXTWORDWINDOW_H
