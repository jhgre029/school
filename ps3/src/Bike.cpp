/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Bike.cpp
 */
 
/* Description: This class should be publically derived from the Vehicle class
                and privately derived from the Property class. */
 
/* Libraries: */
 
/* Headers: */
#include "Bike.h"

int Bike::numberBikes = 0;
std::ofstream Bike::outFile;
bool Bike::outFileExist = false;
int Bike::list = 0;

/*****************************************************************************/
/* Constructors and Destructors */
/*****************************************************************************/
Bike::Bike()
{

	char temp = 'o';

	while (!(temp == 'y') && !(temp == 'n'))
	{
		std::cout << "Horn (y/n): ";
		std::cin >> temp;
		if (temp == 'y')
		{
			horn = true;
		}

		else
		{
			horn = false;
		}
	}

	temp = 'o';
	while (!(temp == 'y') && !(temp == 'n'))
	{
		std::cout << "Light (y/n): ";
		std::cin >> temp;
		if (temp == 'y')
		{
			light = true;
		}

		else
		{
			light = false;
		}
	}

	++numberBikes;	
}

Bike::~Bike()
{
	std::cout << "Deleting a Bike Object" << std::endl;
	--numberBikes;
}

/*****************************************************************************/
/* Getters */
/*****************************************************************************/
bool Bike::getHorn()
{
	return horn;
}

bool Bike::getLight()
{
	return light;
}

int Bike::getNumberBikes()
{
	return numberBikes;
}

/*****************************************************************************/
/* Setters */
/*****************************************************************************/
void Bike::setHorn(bool horn)
{
	this->horn = horn;
}

void Bike::setLight(bool light)
{
	this->light = light;
}

/*****************************************************************************/
/* Other Methods */
/****************************************************************************/
char* Bike::printHorn()
{
	if (horn)
	{
		return "Yes";
	}

	else
	{
		return "No";
	}
}

char* Bike::printLight()
{
	if (light)
	{
		return "Yes";
	}

	else
	{
		return "No";
	}
}

void Bike::output()
{
	outFile.open("Bike.dat", std::ios::out);
	if (!outFile.is_open())
	{
		std::cout << "Could not open Bike.dat" << std::endl;
		return;
	}

	if (!outFileExist)
	{
		outFile << "\tBrand\tModel\tType\tID\tWeight\tHorn\tLights\tValue\tAdministrator" << std::endl;
		outFile << "--------------------------------------------------------------------" << std::endl;
		outFileExist = true;
	}

	++list;
	outFile << list
		<< "\t" << getBrand()
		<< "\t" << getModel()
		<< "\t" << getType()
		<< "\t" << getIDNumber()
		<< "\t" << getWeight()
		<< "\t" << printHorn()
		<< "\t" << printLight()
		<< "\t" << getEstimatedValue()
		<< "\t" << getAdministrator() << std::endl;
}

void Bike::print()
{
	std::cout << "Vehicle " << getList() << ": Bike" << std::endl;
	std::cout << "ID Number: " << getIDNumber() << "\tBrand: " << getBrand()
		<< "\tModel: " << getModel() << "\tType: " << getType()
		<< "\tWeight: " << getWeight() << std::endl;
	std::cout << "Horn: " << printHorn() << "\tLights: " << printLight() << std::endl;
	std::cout << "Estimated Value: " << getEstimatedValue() << "\tAdministrator: " << getAdministrator()
		<< std::endl;
	incrimentList();
}