#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int numDoors;
public:
    //constructors:
    Car() : numDoors(4), Vehicle() {}
    
    Car(std::string man, int yB, int tC) :Vehicle(man, yB) {
        numDoors = tC;
    }

    //Mutators:
    inline void setNumDoors(int tC) { numDoors = tC; }

    //Accessors:
    inline int getNumDoors() { return numDoors; }

    void displayInfo();
};

#endif CAR_H