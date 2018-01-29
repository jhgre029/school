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
		static bool outFileExist;
		static int list;

	public:
		/* Constructors and Destructors */
		Bike();
		~Bike();
		friend std::ofstream& operator << (std::ofstream &o, Bike &b);

		/* Getters */
		bool getHorn();
		bool getLight();
		static int getNumberBikes();

		/* Setters */
		void setHorn(bool horn);
		void setLight(bool ligit);
		static void setNumberBikes(int num);

		/* Other Methods */
		char* printHorn();
		char* printLight();
		void output();
		void print();
};

#endif//BIKE_H