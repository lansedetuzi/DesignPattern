#include "mainwindow.h"

#include "Command.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testCommand();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testCommand()
{
    Command *pCommand = new ConcreteCommandA(); // 执行者已经封装到命令的构造函数中
    Invoker *pInvoker = new Invoker(/*pCommand*/);
    pInvoker->execute();
}
