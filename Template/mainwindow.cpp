#include "mainwindow.h"

#include "AbstractClass.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testTemplate();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testTemplate()
{
    AbstractClass *pAbstractClass1 = new ConcreteClass1();
    pAbstractClass1->templateMethod();

    AbstractClass *pAbstractClass2 = new ConcreteClass2();
    pAbstractClass2->templateMethod();
}
