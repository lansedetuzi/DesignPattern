#include "mainwindow.h"

#include "Prototype.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    Prototype *pPrototype = new ConcretePrototype();
    Prototype *pPrototype1 = pPrototype->clone();
    Q_UNUSED(pPrototype1)
}

MainWindow::~MainWindow()
{

}
