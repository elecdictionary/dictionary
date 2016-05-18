/********************************************************************************
** Form generated from reading UI file 'recitewordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITEWORDWINDOW_H
#define UI_RECITEWORDWINDOW_H

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

class Ui_RecitewordWindow
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
    QPushButton *searchButton;
    QPushButton *returnButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecitewordWindow)
    {
        if (RecitewordWindow->objectName().isEmpty())
            RecitewordWindow->setObjectName(QStringLiteral("RecitewordWindow"));
        RecitewordWindow->resize(750, 399);
        RecitewordWindow->setMinimumSize(QSize(750, 399));
        RecitewordWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(RecitewordWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        wordlineEdit = new QLineEdit(centralwidget);
        wordlineEdit->setObjectName(QStringLiteral("wordlineEdit"));
        wordlineEdit->setEnabled(false);
        wordlineEdit->setGeometry(QRect(320, 85, 141, 21));
        addsentencesButton = new QPushButton(centralwidget);
        addsentencesButton->setObjectName(QStringLiteral("addsentencesButton"));
        addsentencesButton->setGeometry(QRect(580, 80, 61, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 120, 54, 12));
        sentencesEdit = new QTextEdit(centralwidget);
        sentencesEdit->setObjectName(QStringLiteral("sentencesEdit"));
        sentencesEdit->setEnabled(false);
        sentencesEdit->setGeometry(QRect(180, 200, 391, 131));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 20, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 180, 54, 12));
        wordinfoEdit = new QTextEdit(centralwidget);
        wordinfoEdit->setObjectName(QStringLiteral("wordinfoEdit"));
        wordinfoEdit->setEnabled(false);
        wordinfoEdit->setGeometry(QRect(180, 140, 391, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(11);
        wordinfoEdit->setFont(font1);
        wordinfoEdit->setReadOnly(false);
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(480, 80, 43, 27));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(670, 310, 41, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 80, 81, 31));
        RecitewordWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RecitewordWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        RecitewordWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RecitewordWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RecitewordWindow->setStatusBar(statusbar);

        retranslateUi(RecitewordWindow);

        QMetaObject::connectSlotsByName(RecitewordWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RecitewordWindow)
    {
        RecitewordWindow->setWindowTitle(QApplication::translate("RecitewordWindow", "MainWindow", 0));
        addsentencesButton->setText(QApplication::translate("RecitewordWindow", "\346\267\273\345\212\240\344\276\213\345\217\245", 0));
        label_4->setText(QApplication::translate("RecitewordWindow", "\350\203\214\345\215\225\350\257\215", 0));
        label_2->setText(QApplication::translate("RecitewordWindow", "\350\203\214\345\215\225\350\257\215", 0));
        label_3->setText(QApplication::translate("RecitewordWindow", "\350\203\214\345\215\225\350\257\215", 0));
        wordinfoEdit->setDocumentTitle(QString());
        wordinfoEdit->setPlaceholderText(QString());
        searchButton->setText(QApplication::translate("RecitewordWindow", "search", 0));
        returnButton->setText(QApplication::translate("RecitewordWindow", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("RecitewordWindow", "\350\203\214\345\215\225\350\257\215", 0));
    } // retranslateUi

};

namespace Ui {
    class RecitewordWindow: public Ui_RecitewordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITEWORDWINDOW_H
