#include "mainwindow.h"

#include "Factory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    AbstractFactory *pFactory1 = new CConcreteFactory1();
    pFactory1->createProductA();
    pFactory1->createProductB();

    AbstractFactory *pFactory2 = new CConcreteFactory2();
    pFactory2->createProductA();
    pFactory2->createProductB();

    delete pFactory1;
    pFactory1 = nullptr;
    delete pFactory2;
    pFactory2 = nullptr;
}

MainWindow::~MainWindow()
{

}
