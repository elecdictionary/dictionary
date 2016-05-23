/********************************************************************************
** Form generated from reading UI file 'searchwordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWORDWINDOW_H
#define UI_SEARCHWORDWINDOW_H

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

class Ui_SearchwordWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *wordlineEdit;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *sentencesEdit;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *wordinfoEdit;
    QPushButton *searchButton;
    QPushButton *returnButton;
    QPushButton *addsentencesButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchwordWindow)
    {
        if (SearchwordWindow->objectName().isEmpty())
            SearchwordWindow->setObjectName(QStringLiteral("SearchwordWindow"));
        SearchwordWindow->resize(750, 399);
        SearchwordWindow->setMinimumSize(QSize(750, 399));
        SearchwordWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(SearchwordWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        wordlineEdit = new QLineEdit(centralwidget);
        wordlineEdit->setObjectName(QStringLiteral("wordlineEdit"));
        wordlineEdit->setGeometry(QRect(310, 85, 141, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 80, 81, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 30, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label_2->setFont(font);
        sentencesEdit = new QTextEdit(centralwidget);
        sentencesEdit->setObjectName(QStringLiteral("sentencesEdit"));
        sentencesEdit->setEnabled(false);
        sentencesEdit->setGeometry(QRect(170, 200, 391, 131));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 180, 54, 12));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 120, 54, 12));
        wordinfoEdit = new QTextEdit(centralwidget);
        wordinfoEdit->setObjectName(QStringLiteral("wordinfoEdit"));
        wordinfoEdit->setEnabled(false);
        wordinfoEdit->setGeometry(QRect(170, 140, 391, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(11);
        wordinfoEdit->setFont(font1);
        wordinfoEdit->setReadOnly(false);
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(470, 80, 43, 27));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(660, 310, 41, 31));
        addsentencesButton = new QPushButton(centralwidget);
        addsentencesButton->setObjectName(QStringLiteral("addsentencesButton"));
        addsentencesButton->setGeometry(QRect(570, 80, 61, 31));
        SearchwordWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchwordWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        SearchwordWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchwordWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SearchwordWindow->setStatusBar(statusbar);

        retranslateUi(SearchwordWindow);

        QMetaObject::connectSlotsByName(SearchwordWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SearchwordWindow)
    {
        SearchwordWindow->setWindowTitle(QApplication::translate("SearchwordWindow", "MainWindow", 0));
        label->setText(QApplication::translate("SearchwordWindow", "\350\276\223\345\205\245\345\276\205\346\237\245\345\215\225\350\257\215\357\274\232", 0));
        label_2->setText(QApplication::translate("SearchwordWindow", "\345\215\225\350\257\215\346\237\245\350\257\242", 0));
        label_3->setText(QApplication::translate("SearchwordWindow", "\344\276\213\345\217\245\357\274\232", 0));
        label_4->setText(QApplication::translate("SearchwordWindow", "\345\215\225\350\257\215\344\277\241\346\201\257\357\274\232", 0));
        wordinfoEdit->setDocumentTitle(QString());
        wordinfoEdit->setPlaceholderText(QString());
        searchButton->setText(QApplication::translate("SearchwordWindow", "search", 0));
        returnButton->setText(QApplication::translate("SearchwordWindow", "\350\277\224\345\233\236", 0));
        addsentencesButton->setText(QApplication::translate("SearchwordWindow", "\346\267\273\345\212\240\344\276\213\345\217\245", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchwordWindow: public Ui_SearchwordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWORDWINDOW_H
