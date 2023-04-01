#include "QtWidgetsApplication1.h"
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

#include <QUrl>

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    auto url_translators = QUrl(QString("https://ya.ru/"));
    ui.web_Translators->setUrl(url_translators);

    auto url_talkplayfun= QUrl(QString("https://www.google.ru/"));
    ui.web_TalkPlayFun->setUrl(url_talkplayfun);

}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}
