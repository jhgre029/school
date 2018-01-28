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
std::ofstream Bike::outFile("Bike.dat", std::ios::out);

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

