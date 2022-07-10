#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck() override = default;
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;

    void setSpeed(int s) override;
    void pullOver();

    void rightLane();
    void waySide();
    void slowDown();
};

