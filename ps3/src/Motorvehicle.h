/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Motorvehicle.h
 */
 
/* Description: This class should be publically derived from the Vehicle class*/
 
#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H

/* Libraries: */
#include <iostream> 

/* Headers: */
#include "Vehicle.h"

class MotorVehicle : public Vehicle
{
	private:
		int cc; //cubic centimeters of the engine
		int hp; //horsepower of the engine
		static int numberMotorVehicles; //current number of motor vehicles

	public:
		/* Constructors and Desctuctors */
		MotorVehicle();
		~MotorVehicle();

		/* Getters */
		int getCC();
		int getHP();
		static int getNumberMotorVehicles();

		/* Setters */
		void setCC(int cc);
		void setHP(int hp);
		static void setNumberMotorVehicles(int num);
		static void incrimentMotorVehicles();
		static void decrementMotorVehicles();

		/* Other Methods */
};

#endif//MOTORVEHICLE_H