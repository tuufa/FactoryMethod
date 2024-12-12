#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QString>

class Transport
{
protected:
    QString name;
    double maxLoad;

public:
    Transport(const QString &name, double maxLoad);
    virtual ~Transport() = default;

    virtual QString deliver(double distance, double cargoWeight) = 0;
    virtual double calculateCost(double distance, double cargoWeight) = 0;

    QString getName() const;
    double getMaxLoad() const;
};

class Truck : public Transport
{
public:
    Truck();
    QString deliver(double distance, double cargoWeight) override;
    double calculateCost(double distance, double cargoWeight) override;
};

class Ship : public Transport
{
public:
    Ship();
    QString deliver(double distance, double cargoWeight) override;
    double calculateCost(double distance, double cargoWeight) override;
};

class Plane : public Transport
{
public:
    Plane();
    QString deliver(double distance, double cargoWeight) override;
    double calculateCost(double distance, double cargoWeight) override;
};

class Drone : public Transport
{
public:
    Drone();
    QString deliver(double distance, double cargoWeight) override;
    double calculateCost(double distance, double cargoWeight) override;
};

class Train : public Transport
{
public:
    Train();
    QString deliver(double distance, double cargoWeight) override;
    double calculateCost(double distance, double cargoWeight) override;
};

#endif // TRANSPORT_H
