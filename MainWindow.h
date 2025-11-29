#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>

class MainWindow: public QMainWindow
{
    Q_OBJECT
public:
    MainWindow (QWidget * parent = nullptr);
private slots:
    void converter();
private:
    QLabel* celsius;
    QLabel* title;
    QLabel* result;
    QLineEdit* input;
    QPushButton* textConvert;
};

#endif // MAINWINDOW_H
