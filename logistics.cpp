#include "logistics.h"

// дорожное
Transport* RoadLogistics::createTransport()
{
    return new Truck();
}

// морское
Transport* SeaLogistics::createTransport()
{
    return new Ship();
}

// воздушное
Transport* AirLogistics::createTransport()
{
    return new Plane();
}

// дроновое
Transport* DroneLogistics::createTransport()
{
    return new Drone();
}

// поездное
Transport* TrainLogistics::createTransport()
{
    return new Train();
}
