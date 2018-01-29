/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Vehicle.h
 */
 
/* Description: This is the base class for all vehicles. */

#ifndef VEHICLE_H
#define VEHICLE_H

/* Libraries: */
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <fstream>
 
/* Headers: */

class Vehicle
{
	private:
		int idNumber; //ID of the vehicle
		double weight; //weight of the vehicle
		char *brand; //brand of the vehicle
		char *model; //model of the vehicle
		char *type; //type of the vehicle
		static int numberVehicles; //current vehicle count
		static int list;

	public:
		/* Constructors and Destructors */
		Vehicle();
		~Vehicle();
		
		/* Getters */
		int getIDNumber();
		double getWeight();
		char* getBrand();
		char*getModel();
		char* getType();
		static int getNumberVehicles();
		static int getList();

		/* Setters */
		void setIDNumber(int id);
		void setWeight(double weight);
		void setBrand(char* brand);
		void setModel(char* model);
		void setType(char* type);
		static void incrimentList();

		/* Other Methods */
		virtual void output();
		virtual void print();
};

#endif//VEHICLE_H