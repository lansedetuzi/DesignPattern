#include "mainwindow.h"

#include "Facade.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testFacade();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testFacade()
{
    Facade *pFacade = new Facade();
    pFacade->operation();
}
