/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Vehicle.cpp
 */
 
/* Description: This is the base class for all vehicles. */
 
/* Libraries: */
 
/* Headers: */
#include "Vehicle.h"

int Vehicle::numberVehicles = 0;

/*****************************************************************************/
/* Constructors and Destructors */
/*****************************************************************************/
Vehicle::Vehicle()
{
	std::string temp;
	std::cout << "Vehicle ID: ";
	std::cin >> idNumber;

	std::cout << "Weight: ";
	std::cin >> weight;

	std::cout << "Brand: ";
	std::cin >> temp;
	brand = new char[temp.length() + 1];
	strcpy(brand, temp.c_str());

	std::cout << "Model: ";
	std::cin >> temp;
	model = new char[temp.length() + 1];
	strcpy(model, temp.c_str());

	std::cout << "Type: ";
	std::cin >> temp;
	type = new char[temp.length() + 1];
	strcpy(type, temp.c_str());

	++numberVehicles;
}

Vehicle::~Vehicle()
{
	std::cout << "Deleting a Vehicle Object" << std::endl;
	delete brand;
	delete model;
	delete type;
	--numberVehicles;
}

/*****************************************************************************/
/* Getters */
/*****************************************************************************/
int Vehicle::getIDNumber()
{
	return idNumber;
}

double Vehicle::getWeight()
{
	return weight;
}

char* Vehicle::getBrand()
{
	return brand;
}

char* Vehicle::getModel()
{
	return model;
}

char* Vehicle::getType()
{
	return type;
}

int Vehicle::getNumberVehicles()
{
	return numberVehicles;
}

/*****************************************************************************/
/* Setters */
/*****************************************************************************/
void Vehicle::setIDNumber(int id)
{
	idNumber = id;
}

void Vehicle::setWeight(double weight)
{
	this->weight = weight;
}

void Vehicle::setBrand(char* brand)
{
	delete this->brand; //prevent mem leak
	this->brand = brand;
}

void Vehicle::setModel(char* model)
{
	delete this->model; //prevent mem leak
	this->model = model;
}

void Vehicle::setType(char* type)
{
	delete this->type; //prevent mem leak
	this->type = type;
}

void Vehicle::setNumberVehicles(int num)
{
	numberVehicles = num;
}

void Vehicle::incrimentVehicles()
{
	++numberVehicles;
}

void Vehicle::decrementVehicles()
{
	--numberVehicles;
}

/*****************************************************************************/
/* Other Methods */
/*****************************************************************************/