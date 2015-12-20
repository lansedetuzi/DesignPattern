#include "mainwindow.h"

#include "Proxy.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testProxy();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testProxy()
{
    Subject *pSubject = new ConcreteSubject();
    Proxy *pProxy = new Proxy(pSubject);
    pProxy->request();
}
