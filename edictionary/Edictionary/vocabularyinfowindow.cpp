#include "vocabularyinfowindow.h"
#include "ui_vocabularyinfowindow.h"

VocabularyInfoWindow::VocabularyInfoWindow(ediccontroler *Edic, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VocabularyInfoWindow)
{
    Ediccon = Edic;
    ui->setupUi(this);
}

VocabularyInfoWindow::~VocabularyInfoWindow()
{
    delete ui;
}
