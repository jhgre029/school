/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: VehicleNode.cpp
 */
 
/* Description: */
 
/* Libraries: */
#include <iostream>
#include <stdlib.h>
 
/* Headers: */
#include "Vehicle.h"
#include "Motorvehicle.h"
#include "Property.h"
#include "Bike.h"
#include "Car.h"
#include "Motorcycle.h"
#include "VehicleNode.h"
 
int main(int argc, char* argv[])
{
	Motorcycle* m = new Motorcycle;
	Motorcycle* m2 = new Motorcycle;
	m->output();
	m2->output();
	delete m;
	delete m2;
	return EXIT_SUCCESS;
}
