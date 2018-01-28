/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Motorcycle.h
 */
 
 /* Description: This class should be publically derived from the Vehicle class
                 and privately derived from the Property class. */

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
 
/* Libraries: */
#include <iostream>
#include <fstream>
#include <string>
 
/* Headers: */
#include "Motorvehicle.h"
#include "Property.h"

class Motorcycle : public MotorVehicle, private Property
{
	private:
		int engineStrokes; //number of strokes of the engine
		static int numberMotorcycles; //current number of motorcycles
		static std::ofstream outFile; //output file 
		static int list;
		static bool outFileExist;

	public:
		/* Constructors and Destructors */
		Motorcycle();
		~Motorcycle();

		/* Gettters */
		int getEngineStrokes();
		static int getNumberMotorcycles();

		/* Setters */
		void setEngineStrokes(int strokes);
		
		/* Other Methods */
		void output();
};

#endif//MOTORCYCLE_H