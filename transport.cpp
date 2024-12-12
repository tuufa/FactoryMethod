#include "transport.h"
#include <cmath>

Transport::Transport(const QString &name, double maxLoad) : name(name), maxLoad(maxLoad) {}

QString Transport::getName() const { return name; }
double Transport::getMaxLoad() const { return maxLoad; }

// грузовик
Truck::Truck() : Transport("Грузовик", 10.0) {}
QString Truck::deliver(double distance, double cargoWeight)
{
    return QString("Доставка Грузовиком\nРасстояние: %1 км\nГруз: %2 тонн").arg(distance).arg(cargoWeight);
}
double Truck::calculateCost(double distance, double cargoWeight)
{
    return distance * 5.0;
}

// корабль
Ship::Ship() : Transport("Корабль", 100.0) {}
QString Ship::deliver(double distance, double cargoWeight)
{
    return QString("Доставка Кораблём\nРасстояние: %1 км\nГруз: %2 тонн").arg(distance).arg(cargoWeight);
}
double Ship::calculateCost(double distance, double cargoWeight)
{
    return distance * 1.5;
}

// самолет
Plane::Plane() : Transport("Самолёт", 20.0) {}
QString Plane::deliver(double distance, double cargoWeight)
{
    return QString("Доставка Самолётом\nРасстояние: %1 км\nГруз: %2 тонн").arg(distance).arg(cargoWeight);
}
double Plane::calculateCost(double distance, double cargoWeight)
{
    return distance * 10.0;
}

// дрон
Drone::Drone() : Transport("Дрон", 0.5) {}
QString Drone::deliver(double distance, double cargoWeight)
{
    return QString("Доставка Дроном\nРасстояние: %1 км\nГруз: %2 тонн").arg(distance).arg(cargoWeight);
}
double Drone::calculateCost(double distance, double cargoWeight)
{
    return distance * 20.0;
}

// поезд
Train::Train() : Transport("Поезд", 50.0) {}
QString Train::deliver(double distance, double cargoWeight)
{
    return QString("Доставка Поездом\nРасстояние: %1 км\nГруз: %2 тонн").arg(distance).arg(cargoWeight);
}
double Train::calculateCost(double distance, double cargoWeight)
{
    return distance * 3.0;
}
