#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pic10cbutton_clicked();
    void on_pic10bbutton_clicked();
    void on_schemaA_clicked();
    void on_schemaB_clicked();

private:
    Ui::MainWindow *ui;

    bool schemaA = true;
    bool schemaB = true;
};

#endif // MAINWINDOW_H
