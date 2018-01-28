/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Car.cpp
 */
 
/* Description: This class should be publically derived from the Vehicle class
                and privately derived from the Property class. */
 
/* Libraries: */
 
/* Headers: */
#include "Car.h"

int Car::numberCars = 0;
std::ofstream Car::outFile("Car.dat", std::ios::out);
int Car::list = 0;
bool Car::outFileExist = false;

/*****************************************************************************/
/* Constructors and Destructors */
/*****************************************************************************/
Car::Car()
{
	std::cout << "Seats: ";
	std::cin >> seats;

	std::cout << "Airbags: ";
	std::cin >> airBags;

	++numberCars;
}

Car::~Car()
{
	std::cout << "Deleting a Car Object" << std::endl;
	--numberCars;
}

/*****************************************************************************/
/* Getters */
/*****************************************************************************/
int Car::getSeats()
{
	return seats;
}

int Car::getAirBags()
{
	return airBags;
}

int Car::getNumberCars()
{
	return numberCars;
}

/*****************************************************************************/
/* Setters */
/*****************************************************************************/
void Car::setSeats(int seats)
{
	this->seats = seats;
}

void Car::setAirBags(int airBags)
{
	this->airBags = airBags;
}

void Car::setNumberCars(int num)
{
	numberCars = num;
}

/*****************************************************************************/
/* Other Methods */
/*****************************************************************************/
void Car::output()
{
	if (!outFile.is_open())
	{
		std::cout << "Could not open Car.dat" << std::endl;
		return;
	}

	if (!outFileExist)
	{
		outFile << "Header Stuff Here" << std::endl;
		outFile << "----------------------------------------------------" << std::endl;
		outFileExist = true;
	}

	++list;
	outFile << list;
}