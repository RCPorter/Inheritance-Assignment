#include "Truck.h"

void Truck::displayInfo() {
	Vehicle::displayInfo();
	std::cout << "\nTowing Capacity: " << towingCapacity;
}