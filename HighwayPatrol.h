#pragma once 

#include "Vehicle.h"

#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"


struct Highway;

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );

    void setSpeed(int s) override;

    std::string getVehicleType(Vehicle* v)
    {
        if(auto* car = dynamic_cast<Car*>(v))
        {
            return("car");
        }
        else if(auto* mCycle = dynamic_cast<Motorcycle*>(v))
        {
            return("motorcycle");
        }
        else if (auto* truck = dynamic_cast<SemiTruck*>(v))
        {
            return("truck");
        }
        return ("N/A");
    }
};
