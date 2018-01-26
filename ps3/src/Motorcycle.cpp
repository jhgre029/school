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
int Motorcycle::list = 1;
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
void Motorcycle::createOutFile()
{
	outFile.open("Motorcycle.dat", std::ios::out);
	if (!outFile.is_open())
	{
		std::cout << "Could not open Motorcycle.dat" << std::endl;
		return;
	}

	outFile << "  Brand\tModel\tType\tID\tWeight\tCC\tHP\tStrokes\tValue\tAdministrator" << std::endl;
	outFile << "--------------------------------------------------------------------" << std::endl;

	outFile.close();
	outFileExist = true;
}

void Motorcycle::appOutFile()
{
	outFile.open("Motorcycle.dat", std::ios::out);
	if (!outFile.is_open())
	{
		std::cout << "Could not open Motorcycle.dat" << std::endl;
		return;
	}

	outFile << list
		<< " " << getBrand()
		<< " " << getModel() 
		<< " " << getType() 
		<< " " << getIDNumber()
		<< " " << getWeight() 
		<< " " << getCC() 
		<< " " << getHP() 
		<< " " << getEngineStrokes() 
		<< " " << getEstimatedValue()
		<< " " << getAdministrator() << std::endl;
	++list;

	outFile.close();
}