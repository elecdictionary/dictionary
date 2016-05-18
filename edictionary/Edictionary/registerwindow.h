#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "ediccontroler.h"

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler* Ediccon;

public:
    explicit RegisterWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~RegisterWindow();

private slots:
    void on_ret_Button_clicked();

    void on_username_editingFinished();//确定格式是否正确

    void on_password_editingFinished();

    void on_password_2_editingFinished();

    void on_registerButton_clicked();

private:
    Ui::RegisterWindow *ui;
};

#endif // REGISTERWINDOW_H
