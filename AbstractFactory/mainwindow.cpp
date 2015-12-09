#include "mainwindow.h"

#include "Factory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    CConcreteFactory1 *pFactory1 = new CConcreteFactory1();
    pFactory1->createProductA();
    pFactory1->createProductB();

    CConcreteFactory2 *pFactory2 = new CConcreteFactory2();
    pFactory2->createProductA();
    pFactory2->createProductB();
}

MainWindow::~MainWindow()
{

}
