/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: VehicleNode.h
 */
 
/* Description: This class is used as a node for the linked list */
 
#ifndef VEHICLENODE_H
#define VEHICLENODE_H

/* Libraries: */
#include <iostream>
#include <string>
 
/* Headers: */
#include "Vehicle.h"
#include "Motorvehicle.h"
#include "Bike.h"
#include "Car.h"
#include "Motorcycle.h"

class VehicleNode
{
	private:
		static VehicleNode* head; // a static pointer to the head of the list
		VehicleNode* prev; // pointer to previous node in list
		VehicleNode* next; // pointer to next node in list
		Vehicle* vehicle; // pointer to vehicle object

	public:
		/* Constructors and Descructors */
		VehicleNode();
		~VehicleNode();

		/* Getters */
		static VehicleNode* getHead();
		VehicleNode* getPrev();
		VehicleNode* getNext();
		Vehicle* getVehicle();

		/* Setters */
		static void setHead(VehicleNode* head);
		void setPrev(VehicleNode* prev);
		void setNext(VehicleNode* next);
		void setVehicle(Vehicle* vehicle);

		/* Other Methods */
};

#endif//VEHICLENODE_H