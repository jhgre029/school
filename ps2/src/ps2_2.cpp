/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-16
 * Project: ps2
 * File: ps2_2.cpp
 */
 
/* Description: */
 
/* Libraries: */
#include <iostream>
#include <stdlib.h>
#include <string>
//#include <iomanip.h>

/* Headers: */
#include "ps2_2.h"

ElevatorStack::ElevatorStack()
{
	this->position = 0;
	this->totalWeight = 0.0;
}

ElevatorStack::~ElevatorStack()
{
	while (this->position > 0)
	{
		pop();
	}
}

void ElevatorStack::push(char* name, double weight)
{
	if (this->totalWeight + weight > MAX_WEIGHT)
	{
		std::cout << "Addition of " << name 
			<< " will cause total weight to exceed maximum allowable weight of "
			<< MAX_WEIGHT << std::endl;
	}

	else if (this->position + 1 > MAX_PERSONS)
	{
		std::cout << "Addition of " << name
			<< " will cause total capacity to exceed maximum allowable occupancy of "
			<< MAX_PERSONS << std::endl;
	}

	else
	{
		this->position += 1;
		this->guards[position].name = (char*)malloc((strlen(name) + 1) * sizeof(char));
		strcpy(name, this->guards[position].name);
		this->guards[position].weight = weight;
		this->totalWeight += weight;
	}
}

void ElevatorStack::pop()
{
	if (this->position != 0)
	{
		free(this->guards[position].name);
		this->totalWeight -= this->guards[position].weight;
		this->position -= 1;
		std::cout << "Current capacity: " << this->position << std::endl;
		std::cout << "Current weight: " << this->totalWeight << std::endl;
	}
	
	else
	{
		std::cout << "The stack is empty, no more guards can be removed" << std::endl;
	}
}
