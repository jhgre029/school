/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-02-04
 * Project: ps4
 * File: point.h
 */
 
/* Description: */
 
#ifndef POINT_H
#define POINT_H


/* Libraries: */
#include<iostream>
 
/* Headers: */

class Point
{
private:
	double x, y;
public: 
	Point(double x, double y);

	double getX();
	double getY();
	friend std::ostream& operator << (std::ostream &o, Point &p);
};

#endif //POINT_H