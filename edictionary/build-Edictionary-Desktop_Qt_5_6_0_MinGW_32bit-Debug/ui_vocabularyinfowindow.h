/********************************************************************************
** Form generated from reading UI file 'vocabularyinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOCABULARYINFOWINDOW_H
#define UI_VOCABULARYINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VocabularyInfoWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *wordlineEdit;
    QPushButton *addsentencesButton;
    QLabel *label_4;
    QTextEdit *sentencesEdit;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *wordinfoEdit;
    QPushButton *returnButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VocabularyInfoWindow)
    {
        if (VocabularyInfoWindow->objectName().isEmpty())
            VocabularyInfoWindow->setObjectName(QStringLiteral("VocabularyInfoWindow"));
        VocabularyInfoWindow->resize(750, 399);
        VocabularyInfoWindow->setMinimumSize(QSize(750, 399));
        VocabularyInfoWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(VocabularyInfoWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        wordlineEdit = new QLineEdit(centralwidget);
        wordlineEdit->setObjectName(QStringLiteral("wordlineEdit"));
        wordlineEdit->setEnabled(false);
        wordlineEdit->setGeometry(QRect(230, 70, 141, 21));
        addsentencesButton = new QPushButton(centralwidget);
        addsentencesButton->setObjectName(QStringLiteral("addsentencesButton"));
        addsentencesButton->setGeometry(QRect(640, 240, 61, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 100, 54, 12));
        sentencesEdit = new QTextEdit(centralwidget);
        sentencesEdit->setObjectName(QStringLiteral("sentencesEdit"));
        sentencesEdit->setEnabled(false);
        sentencesEdit->setGeometry(QRect(150, 180, 391, 131));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 10, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 160, 54, 12));
        wordinfoEdit = new QTextEdit(centralwidget);
        wordinfoEdit->setObjectName(QStringLiteral("wordinfoEdit"));
        wordinfoEdit->setEnabled(false);
        wordinfoEdit->setGeometry(QRect(150, 120, 391, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(11);
        wordinfoEdit->setFont(font1);
        wordinfoEdit->setReadOnly(false);
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(640, 290, 51, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 60, 81, 31));
        VocabularyInfoWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VocabularyInfoWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        VocabularyInfoWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(VocabularyInfoWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VocabularyInfoWindow->setStatusBar(statusbar);

        retranslateUi(VocabularyInfoWindow);

        QMetaObject::connectSlotsByName(VocabularyInfoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VocabularyInfoWindow)
    {
        VocabularyInfoWindow->setWindowTitle(QApplication::translate("VocabularyInfoWindow", "MainWindow", 0));
        addsentencesButton->setText(QApplication::translate("VocabularyInfoWindow", "\346\267\273\345\212\240\344\276\213\345\217\245", 0));
        label_4->setText(QApplication::translate("VocabularyInfoWindow", "\345\215\225\350\257\215\344\277\241\346\201\257\357\274\232", 0));
        label_2->setText(QApplication::translate("VocabularyInfoWindow", "\345\215\225\350\257\215\344\277\241\346\201\257", 0));
        label_3->setText(QApplication::translate("VocabularyInfoWindow", "\344\276\213\345\217\245\357\274\232", 0));
        wordinfoEdit->setDocumentTitle(QString());
        wordinfoEdit->setPlaceholderText(QString());
        returnButton->setText(QApplication::translate("VocabularyInfoWindow", "\344\270\213\344\270\200\344\270\252", 0));
        label->setText(QApplication::translate("VocabularyInfoWindow", "\345\215\225\350\257\215\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class VocabularyInfoWindow: public Ui_VocabularyInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOCABULARYINFOWINDOW_H
