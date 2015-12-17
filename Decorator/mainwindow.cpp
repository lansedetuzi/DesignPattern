#include "mainwindow.h"

#include "Decorator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testDecorator();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testDecorator()
{
    Component *pComponent = new ConcreteComponent();
    Decorator *pDecorator = new ConcreateDecorator(pComponent);
    pDecorator->operation();
}
