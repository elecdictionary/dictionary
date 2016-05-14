#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registerwindow.h"
#include "adjustwindow.h"
#include "menuwindow.h"
#include "ediccontroler.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler* Ediccon;

public:
    explicit MainWindow(ediccontroler* Edic, QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_loginButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
