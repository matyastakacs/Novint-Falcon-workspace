#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <workspace.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    libnifalcon::WorkSpace workSpace;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
