/*
->Author: Robert C. Porter
->Class: 22.FA.CIS.1202.502 C++ Software Development
->Date: 11.26.22
->Assignment: Inheritance
*/
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

void getVehicleInfo(string& buff, string& man, int& yB);

int main() {

	string manufacturer, inpBuff;
	int yearBuilt, numDoors, towingCapacity;

	// Get Vehicle Info
	cout << "Enter Vehicle Info:";
	getVehicleInfo(inpBuff, manufacturer, yearBuilt);

	//Create Vehicle Object
	Vehicle vehicle(manufacturer, yearBuilt);
	
	//Output Vehicle Info
	cout << "\n\nStored Vehicle Info:";
	vehicle.displayInfo();

	//Get Car Info
	cout << "\n\nEnter Car Info:";
	getVehicleInfo(inpBuff, manufacturer, yearBuilt);
	cout << "\nEnter Number of Doors:";
	getline(cin, inpBuff);
	numDoors = stoi(inpBuff);

	//Create Car Object
	Car car(manufacturer, yearBuilt, numDoors);
	
	//Output Car Info
	cout << "\n\nStored Car Info:";
	car.displayInfo();

	//Get Truck Info
	cout << "\n\nEnter Truck Info:";
	getVehicleInfo(inpBuff, manufacturer, yearBuilt);
	cout << "\nEnter Towing Capacity:";
	getline(cin, inpBuff);
	towingCapacity = stoi(inpBuff);

	//Create Truck Object
	Truck truck(manufacturer, yearBuilt, towingCapacity);

	//Output Truck Info
	cout << "\n\nStored Truck Info";
	truck.displayInfo();

	cout << endl << endl;
	system("pause");
	return 0;
}

void getVehicleInfo(string &buff, string& man, int& yB) {

	cout << "\nEnter Manufacturer: ";
	getline(cin, man);

	cout << "\nEnter Year Built: ";
	getline(cin, buff);
	yB = stoi(buff);
}