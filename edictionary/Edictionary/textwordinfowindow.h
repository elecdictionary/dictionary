#ifndef TEXTWORDINFOWINDOW_H
#define TEXTWORDINFOWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <string>
#include <vector>
#include <QShowEvent>
#include "ediccontroler.h"
#include "addsentenceswindow.h"

namespace Ui {
class TextWordinfoWindow;
}

class TextWordinfoWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;
    std::vector<std::string> Wordlist;
    int num;

protected:
    void showEvent(QShowEvent *evt);

public:
    explicit TextWordinfoWindow(std::vector<std::string> *wordlist, ediccontroler *Edic, QWidget *parent = 0);
    ~TextWordinfoWindow();

private slots:
    void on_addsentencesButton_clicked();

    void on_returnButton_clicked();

    void on_nextButton_clicked();

    void on_previousButton_clicked();

private:
    Ui::TextWordinfoWindow *ui;
};

#endif // TEXTWORDINFOWINDOW_H
