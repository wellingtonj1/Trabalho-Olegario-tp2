#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "complex.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_3_returnPressed();

    void on_lineEdit_4_returnPressed();

    void on_pushButton_clicked();

    void on_pushButton_pressed();

private:
    Ui::MainWindow *ui;
    Complex a, b, c;
};

#endif // MAINWINDOW_H