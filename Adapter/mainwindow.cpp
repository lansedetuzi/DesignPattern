#include "mainwindow.h"

#include "AdapterE.h"
#include "AdapterC.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testAdapterE();

    testAdapterC();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testAdapterE()
{
    AdapterE *pAdapterE = new AdapterE();
    pAdapterE->request();

}

void MainWindow::testAdapterC()
{
    AdapteeC *pAdapteeC = new AdapteeC();
    AdapterC *pAdapterC = new AdapterC(pAdapteeC);
    pAdapterC->request();
}
