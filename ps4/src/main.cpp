/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-02-04
 * Project: ps4
 * File: ps4_2.cpp
 */
 
/* Description: */
 
/* Libraries: */
#include <iostream>
#include <stdlib.h>
 
/* Headers: */
#include "point.h"
//#include "ps4_1.h"
#include "ps4_2.h"
 
/* Constants */
#define ROWS 50
#define COLUMNS 12

int main(int argc, char* argv[])
{
#ifdef PS4_1
	int visitors[ROWS][COLUMNS] = { 0 };
	int year = 0;
	int duration = 0;

	readData(visitors, year, duration);
	writeInvertedData(visitors, year, duration);

	double income[ROWS][COLUMNS] = { 0.0 };
	readData(income, year, duration);
	writeInvertedData(income, year, duration);
	
#else
#ifdef PS4_2
	Point* p[100];
#endif 
#endif
	return EXIT_SUCCESS;
}
