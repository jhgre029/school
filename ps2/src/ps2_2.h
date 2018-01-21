/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-16
 * Project: ps2
 * File: ps2_2.h
 */
 
/* Description: This file defines the ElevatorStack class */
#ifndef PS_2_2_H
#define PS_2_2_H 

/* Libraries: */
#include <iostream>
#include <string.h>
 
/* Headers: */

/* Definitions */
#define MAX_PERSONS 4
#define MAX_WEIGHT 900



struct Guard
{
	char* name;
	double weight;
};

class ElevatorStack
{
	public:
		ElevatorStack(); //Default Constructor
		~ElevatorStack(); //Destructor
		void push(char* name, double weight);
		void pop();

	private:
		Guard guards[MAX_PERSONS];
		int position;
		double totalWeight;
};

#endif//PS_2_2_H
