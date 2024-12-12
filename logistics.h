#ifndef LOGISTICS_H
#define LOGISTICS_H

#include "transport.h"

class Logistics
{
public:
    virtual ~Logistics() = default;
    virtual Transport* createTransport() = 0;
};

class RoadLogistics : public Logistics
{
public:
    Transport* createTransport() override;
};

class SeaLogistics : public Logistics
{
public:
    Transport* createTransport() override;
};

class AirLogistics : public Logistics
{
public:
    Transport* createTransport() override;
};

class DroneLogistics : public Logistics
{
public:
    Transport* createTransport() override;
};

class TrainLogistics : public Logistics
{
public:
    Transport* createTransport() override;
};

#endif // LOGISTICS_H
