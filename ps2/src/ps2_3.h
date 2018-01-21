/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-16
 * Project: ps2
 * File: ps2_3.h
 */
 
/* Description: */
 
#ifndef PS_2_3_H
#define PS_2_3_H
/* Libraries: */
#include <iostream>
#include <stdio.h>
 
/* Headers: */
#include "cable.h"

int readCableData(Cable **cableAssemblage);
double readWeight();
void printCableData(Cable *cableAssemblage, int numberCables, double weight);
bool checkStrength(Cable *cableAssemblage, int numberCables, double weight);
void determineExtensions(Cable *cableAssemblage, int numberCables, double weight);
void releaseMemory(Cable* cableAssemblage);

#endif//PS_2_3_H
