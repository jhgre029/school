/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-19
 * Project: ps2
 * File: cable.h
 */
 
/* Description: */

#ifndef CABLE_H
#define CABLE_H

/* Libraries: */
#include <iostream>
 
/* Headers: */
class Cable
{
public:
	/* Constructors and Destructors */
	Cable();
	~Cable();
	Cable(double area, double elasticModulus, double length, double strength);
	Cable(Cable& a);

	/* Getters */
	double getArea();
	double getElasticModulus();
	double getLength();
	double getStrength();

	/* Setters */
	void setArea(double area);
	void setElasticModulus(double elasticModulus);
	void setLength(double length);
	void setStrength(double strength);

	/* Other Methods */
	double stiffness();
	double elongation(double weight);
	double stress(double weight);
	bool failure(double weight);

private:
	double area; //area of the cable
	double elasticModulus; //modulus of elasticity of the cable
	double length; //length of the cable
	double strength; //strength of the cable
};

#endif//CABLE_H