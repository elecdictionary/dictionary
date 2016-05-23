/********************************************************************************
** Form generated from reading UI file 'adjustwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUSTWINDOW_H
#define UI_ADJUSTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdjustWindow
{
public:
    QWidget *centralwidget;
    QPushButton *retButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *applyButton;
    QSpinBox *stranumBox;
    QSpinBox *stralevBox;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdjustWindow)
    {
        if (AdjustWindow->objectName().isEmpty())
            AdjustWindow->setObjectName(QStringLiteral("AdjustWindow"));
        AdjustWindow->resize(750, 399);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdjustWindow->sizePolicy().hasHeightForWidth());
        AdjustWindow->setSizePolicy(sizePolicy);
        AdjustWindow->setMinimumSize(QSize(750, 399));
        AdjustWindow->setMaximumSize(QSize(750, 399));
        AdjustWindow->setLayoutDirection(Qt::LeftToRight);
        AdjustWindow->setDocumentMode(false);
        centralwidget = new QWidget(AdjustWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        retButton = new QPushButton(centralwidget);
        retButton->setObjectName(QStringLiteral("retButton"));
        retButton->setGeometry(QRect(660, 300, 51, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 50, 91, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 130, 41, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 170, 91, 31));
        applyButton = new QPushButton(centralwidget);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setEnabled(true);
        applyButton->setGeometry(QRect(340, 240, 81, 31));
        stranumBox = new QSpinBox(centralwidget);
        stranumBox->setObjectName(QStringLiteral("stranumBox"));
        stranumBox->setEnabled(true);
        stranumBox->setGeometry(QRect(400, 180, 42, 22));
        stranumBox->setMinimum(10);
        stranumBox->setValue(50);
        stralevBox = new QSpinBox(centralwidget);
        stralevBox->setObjectName(QStringLiteral("stralevBox"));
        stralevBox->setGeometry(QRect(400, 130, 42, 22));
        stralevBox->setMinimum(1);
        stralevBox->setMaximum(2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 130, 81, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 180, 101, 21));
        AdjustWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdjustWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        AdjustWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdjustWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdjustWindow->setStatusBar(statusbar);

        retranslateUi(AdjustWindow);

        QMetaObject::connectSlotsByName(AdjustWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdjustWindow)
    {
        AdjustWindow->setWindowTitle(QApplication::translate("AdjustWindow", "MainWindow", 0));
        retButton->setText(QApplication::translate("AdjustWindow", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("AdjustWindow", "\347\224\250\346\210\267\350\256\276\347\275\256", 0));
        label_2->setText(QApplication::translate("AdjustWindow", "\351\232\276\345\272\246\357\274\232", 0));
        label_3->setText(QApplication::translate("AdjustWindow", "\346\257\217\346\227\245\350\203\214\345\215\225\350\257\215\346\225\260\347\233\256\357\274\232", 0));
        applyButton->setText(QApplication::translate("AdjustWindow", "\345\272\224\347\224\250", 0));
        stranumBox->setSuffix(QString());
        label_4->setText(QApplication::translate("AdjustWindow", "\350\257\267\345\234\2501-2\344\270\255\351\200\211\346\213\251", 0));
        label_5->setText(QApplication::translate("AdjustWindow", "\350\257\267\345\234\25010-99\344\270\255\351\200\211\346\213\251", 0));
    } // retranslateUi

};

namespace Ui {
    class AdjustWindow: public Ui_AdjustWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUSTWINDOW_H
