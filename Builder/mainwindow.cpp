#include "mainwindow.h"

#include "Builder.h"
#include "Director.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    Director *director = new Director(new ConcreteBuilder());
    director->construct();
    director->pruduct();
}

MainWindow::~MainWindow()
{

}
