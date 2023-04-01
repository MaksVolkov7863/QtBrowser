/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tab_Webbrowser;
    QWidget *tab_translators;
    QHBoxLayout *horizontalLayout_2;
    QWebEngineView *web_Translators;
    QWidget *tab_TalkPlayFun;
    QHBoxLayout *horizontalLayout_3;
    QWebEngineView *web_TalkPlayFun;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QString::fromUtf8("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(600, 400);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tab_Webbrowser = new QTabWidget(centralWidget);
        tab_Webbrowser->setObjectName(QString::fromUtf8("tab_Webbrowser"));
        tab_translators = new QWidget();
        tab_translators->setObjectName(QString::fromUtf8("tab_translators"));
        horizontalLayout_2 = new QHBoxLayout(tab_translators);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        web_Translators = new QWebEngineView(tab_translators);
        web_Translators->setObjectName(QString::fromUtf8("web_Translators"));
        web_Translators->setUrl(QUrl(QString::fromUtf8("about:blank")));

        horizontalLayout_2->addWidget(web_Translators);

        tab_Webbrowser->addTab(tab_translators, QString());
        tab_TalkPlayFun = new QWidget();
        tab_TalkPlayFun->setObjectName(QString::fromUtf8("tab_TalkPlayFun"));
        horizontalLayout_3 = new QHBoxLayout(tab_TalkPlayFun);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        web_TalkPlayFun = new QWebEngineView(tab_TalkPlayFun);
        web_TalkPlayFun->setObjectName(QString::fromUtf8("web_TalkPlayFun"));
        web_TalkPlayFun->setUrl(QUrl(QString::fromUtf8("about:blank")));

        horizontalLayout_3->addWidget(web_TalkPlayFun);

        tab_Webbrowser->addTab(tab_TalkPlayFun, QString());

        horizontalLayout->addWidget(tab_Webbrowser);

        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication1Class->setStatusBar(statusBar);
        toolBar = new QToolBar(QtWidgetsApplication1Class);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(QtWidgetsApplication1Class);

        tab_Webbrowser->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        tab_Webbrowser->setTabText(tab_Webbrowser->indexOf(tab_translators), QApplication::translate("QtWidgetsApplication1Class", "\320\257\320\275\320\264\320\265\320\272\321\201", nullptr));
        tab_Webbrowser->setTabText(tab_Webbrowser->indexOf(tab_TalkPlayFun), QApplication::translate("QtWidgetsApplication1Class", "\320\223\321\203\320\263\320\273", nullptr));
        toolBar->setWindowTitle(QApplication::translate("QtWidgetsApplication1Class", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
