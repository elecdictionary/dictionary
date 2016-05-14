#ifndef ADJUSTWINDOW_H
#define ADJUSTWINDOW_H

#include <QMainWindow>
#include "ediccontroler.h"
#include <QMessageBox>

namespace Ui {
class AdjustWindow;
}

class AdjustWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler* Ediccon;

public:
    explicit AdjustWindow(ediccontroler* Edic, QWidget *parent = 0);
    ~AdjustWindow();

private slots:

    void on_applyButton_clicked();

    void on_retButton_clicked();

private:
    Ui::AdjustWindow *ui;
};

#endif // ADJUSTWINDOW_H
