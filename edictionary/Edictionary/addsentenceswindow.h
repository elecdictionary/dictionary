#ifndef ADDSENTENCESWINDOW_H
#define ADDSENTENCESWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "ediccontroler.h"

namespace Ui {
class AddsentencesWindow;
}

class AddsentencesWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit AddsentencesWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~AddsentencesWindow();

private slots:
    void on_returnButton_clicked();

    void on_addsentencesButton_clicked();

private:
    Ui::AddsentencesWindow *ui;
};

#endif // ADDSENTENCESWINDOW_H
