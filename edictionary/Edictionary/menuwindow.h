#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include "ediccontroler.h"

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit MenuWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~MenuWindow();

private:
    Ui::MenuWindow *ui;
};

#endif // MENUWINDOW_H
