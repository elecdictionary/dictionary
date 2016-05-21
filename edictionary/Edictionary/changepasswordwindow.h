#ifndef CHANGEPASSWORDWINDOW_H
#define CHANGEPASSWORDWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "allstruct.h"
#include "ediccontroler.h"

namespace Ui {
class ChangePasswordWindow;
}

class ChangePasswordWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit ChangePasswordWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~ChangePasswordWindow();

private slots:
    void on_returnButton_clicked();

    void on_applyButton_clicked();

private:
    Ui::ChangePasswordWindow *ui;
};

#endif // CHANGEPASSWORDWINDOW_H
