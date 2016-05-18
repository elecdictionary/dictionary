#ifndef SEARCHWORDWINDOW_H
#define SEARCHWORDWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <string>
#include "ediccontroler.h"
#include "wordnote.h"
#include "addsentenceswindow.h"
#include "allstruct.h"


namespace Ui {
class SearchwordWindow;
}

class SearchwordWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit SearchwordWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~SearchwordWindow();

private slots:
    void on_returnButton_clicked();

    void on_searchButton_clicked();

    void on_addsentencesButton_clicked();

private:
    Ui::SearchwordWindow *ui;
};

#endif // SEARCHWORDWINDOW_H
