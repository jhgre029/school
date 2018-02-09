/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-02-04
 * Project: ps4
 * File: ps4_2.h
 */
 
/* Description: */
 
#ifndef PS4_2
#define PS4_2
/* Libraries: */
#include <iostream>
#include <string> 

/* Headers: */
#include "point.h"

void readPoints(Point** p, int numPoints);
void printPoints(Point** p, int numPoints);
void quickSortPoints(Point** p, int start, int end, double(Point::*m)());
int partitionPoints(Point** p, int start, int end, double(Point::*m)());

#endif