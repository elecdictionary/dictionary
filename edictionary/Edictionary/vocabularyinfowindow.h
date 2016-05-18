#ifndef VOCABULARYINFOWINDOW_H
#define VOCABULARYINFOWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "allstruct.h"
#include "ediccontroler.h"

namespace Ui {
class VocabularyInfoWindow;
}

class VocabularyInfoWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit VocabularyInfoWindow(ediccontroler *Edic, QWidget *parent = 0);
    ~VocabularyInfoWindow();

private:
    Ui::VocabularyInfoWindow *ui;
};

#endif // VOCABULARYINFOWINDOW_H