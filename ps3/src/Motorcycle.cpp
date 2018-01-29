/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Motorcycle.cpp
 */
 
/* Description: */
 
/* Libraries: */
 
/* Headers: */
#include "Motorcycle.h"

int Motorcycle::numberMotorcycles = 0;
int Motorcycle::list = 0;
bool Motorcycle::outFileExist = false;
std::ofstream Motorcycle::outFile;

/*****************************************************************************/
/* Constructors and Destructors */
/*****************************************************************************/
Motorcycle::Motorcycle()
{
	std::cout << "Engine Strokes: ";
	std::cin >> engineStrokes;

	++numberMotorcycles;
}

Motorcycle::~Motorcycle()
{
	std::cout << "Deleting a Motorcycle Object" << std::endl;
	--numberMotorcycles;
}

/*****************************************************************************/
/* Getters */
/*****************************************************************************/
int Motorcycle::getEngineStrokes()
{
	return engineStrokes;
}

int Motorcycle::getNumberMotorcycles()
{
	return numberMotorcycles;
}

/*****************************************************************************/
/* Setters */
/*****************************************************************************/
void Motorcycle::setEngineStrokes(int strokes)
{
	engineStrokes = strokes;
}

/*****************************************************************************/
/* Other Methods */
/*****************************************************************************/
void Motorcycle::output()
{
	outFile.open("Motorcycle.dat", std::ios::out);
	if (!outFile.is_open())
	{
		std::cout << "Could not open Motorcycle.dat" << std::endl;
		return;
	}

	if (!outFileExist)
	{
		outFile << "\tBrand\tModel\tType\tID\tWeight\tCC\tHP\tStrokes\tValue\tAdministrator" << std::endl;
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
		<< "\t" << getCC()
		<< "\t" << getHP()
		<< "\t" << getEngineStrokes()
		<< "\t" << getEstimatedValue()
		<< "\t" << getAdministrator() << std::endl;
}

void Motorcycle::print()
{
	std::cout << "Vehicle " << getList() << ": Motorcycle" << std::endl;
	std::cout << "ID Number: " << getIDNumber() << "\tBrand: " << getBrand()
		<< "\tModel: " << getModel() << "\tType: " << getType()
		<< "\tWeight: " << getWeight() << std::endl;
	std::cout << "CC: " << getCC() << "\tHP: " << getHP() << std::endl;
	std::cout << "Engine Strokes: " << engineStrokes << std::endl;
	std::cout << "Estimated Value: " << getEstimatedValue() << "\tAdministrator: " << getAdministrator()
		<< std::endl;
	incrimentList();
}