/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Property.h
 */
 
/* Description: This is a superclass of the classes car Motorcycle and Bike */
 
#ifndef PROPERTY_H
#define PROPERTY_H

/* Libraries: */
#include <iostream> 
#include <string>

/* Headers: */

class Property
{
	private:
		double estimatedValue; //store estimated value
		char* administrator; //name of person responsible for this vehicle

	public:
		/* Constructors and Destructors */
		Property();
		~Property();

		/* Getters */
		double getEstimatedValue();
		char* getAdministrator();

		/* Setters */
		void setEstimatedValue(double value);
		void setAdministrator(char* admin);

		/* Other Methods */
};

#endif//PROPERTY_H