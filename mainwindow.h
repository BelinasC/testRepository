#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QSignalMapper *signalMapperButtons;

private slots:
    void on_pushButton_clicked(int idButton);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
