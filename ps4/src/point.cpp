/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-02-04
 * Project: ps4
 * File: point.cpp
 */
 
/* Description: */
 
/* Libraries: */
 
/* Headers: */
#include "point.h"

Point::Point(double x, double y)
	: x(x), y(y)
{
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

std::ostream& operator << (std::ostream &o, Point &p)
{
	o << "(x,y) = (" << p.x << "," << p.y << ")";
	return o;
}