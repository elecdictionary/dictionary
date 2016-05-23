/********************************************************************************
** Form generated from reading UI file 'searchtextwordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHTEXTWORDWINDOW_H
#define UI_SEARCHTEXTWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchTextWordWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *searchButton;
    QPushButton *returnButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchTextWordWindow)
    {
        if (SearchTextWordWindow->objectName().isEmpty())
            SearchTextWordWindow->setObjectName(QStringLiteral("SearchTextWordWindow"));
        SearchTextWordWindow->resize(750, 399);
        SearchTextWordWindow->setMinimumSize(QSize(750, 399));
        SearchTextWordWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(SearchTextWordWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 20, 151, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        label->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 80, 491, 191));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(340, 310, 81, 31));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(660, 310, 61, 31));
        SearchTextWordWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchTextWordWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        SearchTextWordWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchTextWordWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SearchTextWordWindow->setStatusBar(statusbar);

        retranslateUi(SearchTextWordWindow);

        QMetaObject::connectSlotsByName(SearchTextWordWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SearchTextWordWindow)
    {
        SearchTextWordWindow->setWindowTitle(QApplication::translate("SearchTextWordWindow", "MainWindow", 0));
        label->setText(QApplication::translate("SearchTextWordWindow", "\346\226\207\346\234\254\347\224\237\350\257\215\346\237\245\350\257\242", 0));
        searchButton->setText(QApplication::translate("SearchTextWordWindow", "\346\237\245\350\257\242\347\224\237\350\257\215", 0));
        returnButton->setText(QApplication::translate("SearchTextWordWindow", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchTextWordWindow: public Ui_SearchTextWordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHTEXTWORDWINDOW_H
