#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

class Vehicle
{

private:
	std::string manufacturer;
	int yearBuilt;

public:
	//Constructors:
	Vehicle() : manufacturer("unassigned"), yearBuilt(1886) {}

	Vehicle(std::string m, int yB) {
		manufacturer = m;
		yearBuilt = yB;
	}

	//Mutators:
	inline void setManufacturer(std::string m) { manufacturer = m; }
	inline void setYearBuilt(int yB) { yearBuilt = yB; }

	//Accessors:
	inline std::string getManufacturer() { return manufacturer; }
	inline int getYearBuilt() { return yearBuilt; }

	void displayInfo();
};

#endif VEHICLE_H