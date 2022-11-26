#include "Car.h"

void Car::displayInfo() {
	Vehicle::displayInfo();
	std::cout << "\nNumber of Doors: " << numDoors;
}