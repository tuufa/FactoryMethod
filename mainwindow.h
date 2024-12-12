#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "logistics.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_calculate_clicked();
    void on_button_generate_report_clicked();
    void on_button_clear_clicked();

private:
    Ui::MainWindow *ui;
    QList<QString> deliveryRecords;
};

#endif // MAINWINDOW_H
