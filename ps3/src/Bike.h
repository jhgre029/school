/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Bike.h
 */
 
/* Description: This class should be publically derived from the Vehicle class
                and privately derived from the Property class. */

#ifndef BIKE_H
#define BIKE_H

/* Libraries: */
#include <iostream>
#include <fstream>
#include <string>

/* Headers: */
#include "Vehicle.h"
#include "Property.h"

class Bike : public Vehicle, private Property
{
	private:
		bool horn; //true (false) if it has (not) a horn
		bool light; //true (false) if it has (not) a light
		static int numberBikes; //current number of bikes
		static std::ofstream outFile; //output file

	public:
		/* Constructors and Destructors */
		Bike();
		~Bike();
		friend std::ofstream& operator << (std::ofstream &o, Bike &b);

		/* Getters */
		bool getHorn();
		bool getLight();
		static int getNumberBikes();
		static std::ofstream getOutFile();

		/* Setters */
		void setHorn(bool horn);
		void setLight(bool ligit);
		static void setNumberBikes(int num);
		static void incrimentBikes();
		static void decrementBikes();
		static void setOutFile(std::ofstream outFile);

		/* Other Methods */
};

#endif//BIKE_H