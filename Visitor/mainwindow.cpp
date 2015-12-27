#include "mainwindow.h"

#include "Visitor.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testVisitor();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testVisitor()
{
    Visitor *pVisitorA = new ConcreteVisitorA();
    Visitor *pVisitorB = new ConcreteVisitorB();

    Element *pElementA = new ConcreteElementA();
    Element *pElementB = new ConcreteElementB();

    pElementA->Accept(pVisitorA);
    pElementB->Accept(pVisitorB);
}
