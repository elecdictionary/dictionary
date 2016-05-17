#ifndef SEARCHWORDWINDOW_H
#define SEARCHWORDWINDOW_H

#include <QMainWindow>
#include "ediccontroler.h"
#include "wordnote.h"

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
    void on_pushButton_clicked();

private:
    Ui::SearchwordWindow *ui;
};

#endif // SEARCHWORDWINDOW_H
