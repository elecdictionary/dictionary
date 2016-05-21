#ifndef VOCABULARYINFOWINDOW_H
#define VOCABULARYINFOWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QShowEvent>
#include "allstruct.h"
#include "ediccontroler.h"
#include "addsentenceswindow.h"

namespace Ui {
class VocabularyInfoWindow;
}

class VocabularyInfoWindow : public QMainWindow
{
    Q_OBJECT
    ediccontroler *Ediccon;

public:
    explicit VocabularyInfoWindow(QString Vocabulary, ediccontroler *Edic, QWidget *parent = 0);
    ~VocabularyInfoWindow();

private slots:
    void on_addsentencesButton_clicked();

    void on_returnButton_clicked();

private:
    Ui::VocabularyInfoWindow *ui;
};

#endif // VOCABULARYINFOWINDOW_H
