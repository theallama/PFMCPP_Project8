#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::moveToRightLane( )
{
    setSpeed(65);
    std::cout << "Semi: Stay in the right lane" << std::endl;
}

void SemiTruck::exitToWaySide()
{
    setSpeed(0);
    std::cout << "Semi: Get some sleep" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": ( : ( :( :( : (" << std::endl;
}

void SemiTruck::setSpeed(int speed)
{
    std::cout << name << "Semi: set speed" << std::endl;
    Vehicle::setSpeed(speed);
}

