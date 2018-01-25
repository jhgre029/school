/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: Motorvehicle.cpp
 */
 
/* Description: */
 
/* Libraries: */
 
/* Headers: */
#include "Motorvehicle.h"

int MotorVehicle::numberMotorVehicles = 0;

/*****************************************************************************/
/* Constructors and Destructors */
/*****************************************************************************/
MotorVehicle::MotorVehicle()
{
	std::cout << "CC: ";
	std::cin >> cc;

	std::cout << "HP: ";
	std::cin >> hp;

	incrimentMotorVehicles();
}

MotorVehicle::~MotorVehicle()
{
	std::cout << "Destroying a MotorVehicle Object" << std::endl;
}

/*****************************************************************************/
/* Getters */
/*****************************************************************************/
int MotorVehicle::getCC()
{
	return cc;
}

int MotorVehicle::getHP()
{
	return hp;
}

int MotorVehicle::getNumberMotorVehicles()
{
	return numberMotorVehicles;
}

/*****************************************************************************/
/* Setters */
/*****************************************************************************/
void MotorVehicle::setCC(int cc)
{
	this->cc = cc;
}

void MotorVehicle::setHP(int hp)
{
	this->hp = hp;
}

void MotorVehicle::setNumberMotorVehicles(int num)
{
	numberMotorVehicles = num;
}

void MotorVehicle::incrimentMotorVehicles()
{
	++numberMotorVehicles;
}

void MotorVehicle::decrementMotorVehicles()
{
	--numberMotorVehicles;
}

/*****************************************************************************/
/* Other Methods */
/*****************************************************************************/
