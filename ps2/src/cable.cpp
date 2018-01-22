/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-19
 * Project: ps2
 * File: cable.cpp
 */
 
/* Description: */
 
/* Libraries: */
 
/* Headers: */
#include "cable.h"

/*************************************************************************/
/* Constructors and Destructors */
/*************************************************************************/
Cable::Cable()
{


	this->area = 0;
	this->elasticModulus = 0;
	this->length = 0;
	this->strength = 0;
}

Cable::~Cable()
{

}

Cable::Cable(double area, double elasticModulus, double length, double strength)
{
	this->area = area;
	this->elasticModulus = elasticModulus;
	this->length = length;
	this->strength = strength;
}

Cable::Cable(Cable& a)
{
	this->area = a.area;
	this->elasticModulus = a.elasticModulus;
	this->length = a.length;
	this->strength = a.strength;
}

std::istream& operator>>(std::istream &i, Cable &c)
{
	std::cout << "Area: ";
	std::cin.clear();
	std::cin >> c.area;

	std::cout << "Modulus of elasticity: ";
	std::cin.clear();
	std::cin >> c.elasticModulus;

	std::cout << "Length: ";
	std::cin.clear();
	std::cin >> c.length;

	std::cout << "Strength: ";
	std::cin.clear();
	std::cin >> c.strength;

	return i;
}

std::ostream& operator << (std::ostream &o, Cable &c)
{
	std::cout << "   Area: " << c.getArea() << std::endl;
	std::cout << "   Modulus of elasticity: " << c.getElasticModulus() << std::endl;
	std::cout << "   Length: " << c.getLength() << std::endl;
	std::cout << "   Strength: " << c.getStrength() << std::endl;

	return o;
}

/*************************************************************************/
/* Getters */
/*************************************************************************/
double Cable::getArea()
{
	return this->area;
}

double Cable::getElasticModulus()
{
	return this->elasticModulus;
}

double Cable::getLength()
{
	return this->length;
}

double Cable::getStrength()
{
	return this->strength;
}

/*************************************************************************/
/* Setters */
/*************************************************************************/
void Cable::setArea(double area)
{
	this->area = area;
}

void Cable::setElasticModulus(double elasticModulus)
{
	this->elasticModulus = elasticModulus;
}

void Cable::setLength(double length)
{
	this->length = length;
}

void Cable::setStrength(double strength)
{
	this->strength = strength;
}

/*************************************************************************/
/* Other Methods */
/*************************************************************************/

/* Calculates and returns a stiffness value */
double Cable::stiffness()
{
	return area * elasticModulus / length;
}

/* Calculates and returns the elongation */
double Cable::elongation(double weight)
{
	return weight / stiffness();
}

/* Calculates and returns the stress*/
double Cable::stress(double weight)
{
	return weight / area;
}

/* Determines if the cable has failed (true = failed) */
bool Cable::failure(double weight)
{
	if (stress(weight) > strength)
	{
		return true;
	}

	else
	{
		return false;
	}
}