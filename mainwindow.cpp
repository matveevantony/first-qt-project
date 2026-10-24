#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

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

    // кнопка (QPushButton)
    QPushButton* button1 = new QPushButton("Нажми меня", this);
    button1->setGeometry(350, 150, 100, 30);

    // строка ввода текста (QLineEdit)
    QLineEdit* edit1 = new QLineEdit(this);
    edit1->setGeometry(100, 200, 600, 30);
    edit1->setPlaceholderText("введите сюда какой-нибудь текст");
    // настройка цвета текста-заполнителя
    QPalette pal = edit1->palette();
    pal.setColor(QPalette::PlaceholderText, Qt::gray); // для теста
    edit1->setPalette(pal);
    // ограничения строки ввода текста
    edit1->setMaxLength(256);
    edit1->setReadOnly(false);
    // строка ввода с маской
    QLineEdit* edit2 = new QLineEdit(this);
    edit2->setGeometry(100, 250, 600, 30);
    edit2->setInputMask("+7(999)999-99-99;_");
    // строка ввода пароля
    QLineEdit* passEdit = new QLineEdit(this);
    passEdit->setGeometry(100, 300, 600, 30);
    passEdit->setPlaceholderText("введите пароль");
    passEdit->setEchoMode(QLineEdit::Password);
    passEdit->setPalette(pal);
}

MainWindow::~MainWindow() = default;
