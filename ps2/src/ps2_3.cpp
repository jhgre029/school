/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-16
 * Project: ps2
 * File: ps2_3.cpp
 */
 
/* Description: */
 
/* Libraries: */
 
/* Headers: */
#include "ps2_3.h"

int readCableData(Cable **cableAssemblage)
{
	int cables;
	int i;
	double area, elasticModulus, length, strength;

	std::cout << "Enter the number of cables in the assemblage: ";
	std::cin >> cables;
	
	*cableAssemblage = new Cable[cables];
	for (i = 0; i < cables; i++)
	{
		std::cout << "\n\nEnter the data for cable " << i + 1 << std::endl;
		std::cin >> *(*cableAssemblage + i);
	}
	
	return cables;
}

double readWeight()
{
	double weight;
	std::cout << "\n\nEnter the weight of the machinery: ";
	std::cin >> weight;
	return weight;
}

void printCableData(Cable* cableAssemblage, int numberCables, double weight)
{
	int i;

	for (i = 0; i < numberCables; i++)
	{
		std::cout << "Cable " << i + 1 << std::endl;
		std::cout << *(cableAssemblage + i);
	}	
}

bool checkStrength(Cable* cableAssemblage, const int numberCables, double weight)
{
	bool result = true;
	int i;

	for (i = 0; i < numberCables; i++)
	{
		if (result && cableAssemblage[i].failure(weight))
		{

			result = false;
			std::cout << "This assemblage cannot support the machinery." << std::endl;
			std::cout << "Cable " << i + 1 << " will fail!!!" << std::endl;
		}
		
		else if (cableAssemblage[i].failure(weight))
		{
			std::cout << "Cable " << i + 1 << " will fail!!!" << std::endl;
		}
	}

	if (result)
	{
		double sum = 0;
		double K;
		std::cout << "Equivalent stiffness constant: ";
		for (i = 0; i < numberCables; i++)
		{
			sum = sum + (1 / cableAssemblage[i].stiffness());
		}

		K = (1 / sum);
		std::cout << K << std::endl;

		std::cout << "The assemblage will extend " << weight / K << " units beyond its original length" << std::endl;
	}

	return result;
}

void determineExtensions(Cable *cableAssemblage, int numberCables, double weight)
{
	int i;
	for (i = 0; i < numberCables; i++)
	{
		std::cout << "Cable " << i + 1
			<< "stress=" << cableAssemblage[i].stress(weight)
			<< "\tElongation=" << cableAssemblage[i].elongation(weight) << std::endl;
	}
}

void releaseMemory(Cable* cableAssemblage)
{
	delete []cableAssemblage;
}