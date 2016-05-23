#ifndef ADJUSTWINDOW_H
#define ADJUSTWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QShowEvent>
#include "ediccontroler.h"

namespace Ui {
class AdjustWindow;
}

class AdjustWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler* Ediccon;

protected:
    void showEvent(QShowEvent *evt);

public:
    explicit AdjustWindow(ediccontroler* Edic, QWidget *parent = 0);
    ~AdjustWindow();

private slots:

    void on_applyButton_clicked();

    void on_retButton_clicked();

    void on_stralevBox_valueChanged(int arg1);

    void on_stranumBox_valueChanged(int arg1);


private:
    Ui::AdjustWindow *ui;
};

#endif // ADJUSTWINDOW_H
