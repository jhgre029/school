/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Property.cpp
 */
 
/* Description: This is a superclass of the classes car Motorcycle and Bike */
 
/* Libraries: */
 
/* Headers: */
#include "Property.h"

/*****************************************************************************/
/* Constructors and Destructors */
/*****************************************************************************/
Property::Property()
{
	std::string temp;
	std::cout << "Estimated Value: ";
	std::cin >> this->estimatedValue;

	std::cout << "Administrator";
	std::cin >> temp;
	this->administrator = new char[temp.length()];
	strcpy(administrator, temp.c_str());
}

Property::~Property()
{
	std::cout << "Deleting a Property Object" << std::endl;
	delete administrator;
}

/*****************************************************************************/
/* Getters */
/*****************************************************************************/
double Property::getEstimatedValue()
{
	return estimatedValue;
}

char* Property::getAdministrator()
{
	return administrator;
}

/*****************************************************************************/
/* Setters */
/*****************************************************************************/
void Property::setEstimatedValue(double value)
{
	estimatedValue = value;
}

void Property::setAdministrator(char* admin)
{
	administrator = admin;
}