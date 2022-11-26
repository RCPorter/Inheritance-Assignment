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
    
    Car(std::string man, int yB, int nD) :Vehicle(man, yB) {
        numDoors = nD;
    }

    //Mutators:
    inline void setNumDoors(int nD) { numDoors = nD; }

    //Accessors:
    inline int getNumDoors() { return numDoors; }

    void displayInfo();
};

#endif CAR_H