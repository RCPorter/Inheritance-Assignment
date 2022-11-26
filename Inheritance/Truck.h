#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : 
    public Vehicle
{
private:
    int towingCapacity;
public:
    //constructors:
    Truck() : towingCapacity(1000), Vehicle() {}

    Truck(std::string man, int yB, int tC), Vehicle(man, yB) {
        towingCapacity = tC;
    }

    //Mutators:
    inline void setTowingCapacity(int tC) { towingCapacity = tC; }

    //Accessors:
    inline int getTowingCapacity() { return towingCapacity; }

    void displayInfo();
};

#endif TRUCK_H