#include "mainwindow.h"
#include "ui_MainWindow.h"
#include <cmath>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_calculate_clicked()
{
    QString transportType = ui->comboBox_transport_type->currentText();
    double distance = ui->lineEdit_distance->text().toDouble();
    double cargoWeight = ui->lineEdit_cargo->text().toDouble();

    Logistics* logistics = nullptr;
    if (transportType == "Грузовик") logistics = new RoadLogistics();
    else if (transportType == "Корабль") logistics = new SeaLogistics();
    else if (transportType == "Самолет") logistics = new AirLogistics();
    else if (transportType == "Дрон") logistics = new DroneLogistics();
    else if (transportType == "Поезд") logistics = new TrainLogistics();

    if (!logistics) return;

    Transport* transport = logistics->createTransport();
    int requiredUnits = std::ceil(cargoWeight / transport->getMaxLoad());
    double cost = requiredUnits * transport->calculateCost(distance, cargoWeight);

    QString result = transport->deliver(distance, cargoWeight);
    result += QString("\nСтоимость: %1 руб").arg(cost);

    if (requiredUnits > 1)
    {
        result += QString("\nТребуется транспорта: %1 единиц").arg(requiredUnits);
    }

    ui->textEdit_output->append(result);

    // Добавляем информацию в textEdit_output_report
    static int reportIndex = 1; // Статическая переменная для хранения номера записи
    QString reportEntry = QString("%1. %2: %3 км, %4 тонн, %5 руб")
                              .arg(reportIndex++)
                              .arg(transportType)
                              .arg(distance)
                              .arg(cargoWeight)
                              .arg(cost);
    ui->textEdit_output_report->append(reportEntry);

    delete transport;
    delete logistics;
}


void MainWindow::on_button_generate_report_clicked()
{
    QString reportText = ui->textEdit_output_report->toPlainText();

    // Открыть диалоговое окно для выбора файла
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Сохранить отчет"),
                                                    "",
                                                    tr("Текстовые файлы (*.txt);;Все файлы (*.*)"));

    if (fileName.isEmpty())
    {
        return;
    }

    // Создать и открыть файл
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, tr("Ошибка"), tr("Не удалось открыть файл для записи."));
        return;
    }

    QTextStream out(&file);
    out << reportText;

    file.close();

    QMessageBox::information(this, tr("Успех"), tr("Отчет успешно сохранен."));
}






void MainWindow::on_button_clear_clicked()
{
    ui->textEdit_output->clear();
    ui->textEdit_output_report->clear();
    deliveryRecords.clear();
}
