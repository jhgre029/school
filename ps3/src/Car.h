/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Car.h
 */
 
 /* Description: This class should be publically derived from the Vehicle class
                 and privately derived from the Property class. */
 
#ifndef CAR_H
#define CAR_H
				 
/* Libraries: */
#include <iostream>
#include <string>
#include <fstream>
 
/* Headers: */
#include "Motorvehicle.h"
#include "Property.h"

class Car : public MotorVehicle, private Property
{
	private:
		int seats;
		int airBags;
		static int numberCars;
		static std::ofstream outFile;
		static bool outFileExist;
		static int list;

	public:
		/* Constructors and Destructors */
		Car();
		~Car();
		friend std::ofstream& operator << (std::ofstream &o, Car c);

		/* Getters */
		int getSeats();
		int getAirBags();
		static int getNumberCars();

		/* Setters */
		void setSeats(int seats);
		void setAirBags(int airBags);
		static void setNumberCars(int num);

		/* Other Methods */
		void output();
		void print();
};

#endif//CAR_H