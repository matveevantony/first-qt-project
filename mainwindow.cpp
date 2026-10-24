#include "mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // настройка размеров окна
    setFixedSize(800, 600);

    // настройка заголовка окна
    setWindowTitle("Моё первое Qt приложение");

    // настройка иконки окна
    setWindowIcon(QIcon(":/images/icons/fireworks.png"));

    // текстовое поле (QLabel)
    QLabel* label1 = new QLabel("Привет, Qt!", this);
    label1->setGeometry(100, 100, 600, 15);
    label1->setAlignment(Qt::AlignCenter);
    QLabel* label2 = new QLabel("Это задание будет сдано в систему <b>Moodle</b> по <a href='https://moodle.matv.su/'>ссылке</a>", this);
    label2->setTextFormat(Qt::RichText);
    label2->setOpenExternalLinks(true);
    label2->setGeometry(100, 120, 600, 15);
    label2->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow() = default;
