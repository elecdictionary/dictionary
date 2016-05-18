#ifndef RECITEWORDWINDOW_H
#define RECITEWORDWINDOW_H

#include <QMainWindow>
#include "allstruct.h"
#include "ediccontroler.h"

namespace Ui {
class RecitewordWindow;
}

class RecitewordWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit RecitewordWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~RecitewordWindow();

private:
    Ui::RecitewordWindow *ui;
};

#endif // RECITEWORDWINDOW_H
