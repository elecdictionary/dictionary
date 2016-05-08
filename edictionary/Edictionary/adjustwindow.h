#ifndef ADJUSTWINDOW_H
#define ADJUSTWINDOW_H

#include <QMainWindow>

namespace Ui {
class AdjustWindow;
}

class AdjustWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdjustWindow(QWidget *parent = 0);
    ~AdjustWindow();

private:
    Ui::AdjustWindow *ui;
};

#endif // ADJUSTWINDOW_H
