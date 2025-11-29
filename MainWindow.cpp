#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent):QMainWindow(parent)
{
    this->setWindowTitle("Temperature Converter");
    this->setFixedSize(350, 250);

    title = new QLabel("Celsius → Fahrenheit", this);
    title->setGeometry(40, 10, 270, 40);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-size: 20px; font-weight: bold;");

    celsius = new QLabel("Celsius:", this);
    celsius->setGeometry(30, 70, 80, 30);
    celsius->setStyleSheet("font-size: 16px; font-weight: bold;");

    input = new QLineEdit(this);
    input->setGeometry(110, 70, 180, 30);
    input->setPlaceholderText("Enter Celsius");

    textConvert = new QPushButton("Convert", this);
    textConvert->setGeometry(110, 115, 120, 32);
    textConvert->setStyleSheet("font-size: 14px;");

    result = new QLabel("Fahrenheit: ", this);
    result->setGeometry(30, 160, 260, 30);
    result->setStyleSheet("font-size: 16px; font-weight: bold;");

    connect(textConvert, &QPushButton::clicked, this, &MainWindow::converter);
}

void MainWindow::converter()
{
    if (input->text().isEmpty()) {
        result->setText("Fahrenheit: ---");
        return;
    }

    double celsius = input->text().toDouble();
    double fahrenheit = (celsius * 9/5) + 32;
    result->setText("Fahrenheit:" + QString::number(fahrenheit));
}
