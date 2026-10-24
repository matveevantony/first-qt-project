#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // настройка размеров окна
    resize(800, 600);
    QSize min_sz(500, 500);
    QSize max_sz(1000, 1000);
    setMinimumSize(min_sz);
    setMaximumSize(max_sz);

    // настройка заголовка окна
    setWindowTitle("Моё первое Qt приложение");

    // настройка иконки окна
    setWindowIcon(QIcon(":/images/icons/fireworks.png"));
}

MainWindow::~MainWindow() = default;
