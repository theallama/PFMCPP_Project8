#pragma once
#include "Vehicle.h"

struct Car : Vehicle
{
    Car(const std::string& s);
    ~Car() override = default;
    Car(const Car&) = default;
    Car& operator=(const Car&) = default;

    void closeWindows();

    void tryToEvade() override;
};

