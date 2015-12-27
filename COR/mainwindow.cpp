#include "mainwindow.h"

#include "Handle.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testChainOfResponsibilty();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testChainOfResponsibilty()
{
    Handle *handleA = new ConcreteHandleA();
    Handle *handleB = new ConcreteHandleB();

    handleA->setSuccessor(handleB);
    handleA->handleRequest();
}
