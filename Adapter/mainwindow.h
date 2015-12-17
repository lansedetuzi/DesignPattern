#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /**
     * @brief testAdapterE
     *      测试通过继承方式实现的适配器模式
     */
    void testAdapterE();

    /**
     * @brief testAdapterC
     *      测试通过组合模式实现的适配器模式
     */
    void testAdapterC();
};

#endif // MAINWINDOW_H
