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
	int area, elasticModulus, length, strength;

	std::cout << "Enter the number of cables in the assemblage: ";
	std::cin >> cables;
	
	*cableAssemblage = (Cable*)malloc(cables * sizeof(Cable));
	for (i = 0; i < cables; i++)
	{
		std::cout << "\n\nEnter the data for cable " << i + 1 << std::endl;
		
		std::cout << "\n\nArea: "; 
		std::cin >> area;

		std::cout << "\nModulus of elasticity: ";
		std::cin >> elasticModulus;

		std::cout << "\nLength: ";
		std::cin >> length;
		
		std::cout << "\nStrength: ";
		std::cin >> length;
		
		cableAssemblage[i]->setArea(area);
		cableAssemblage[i]->setElasticModulus(elasticModulus);
		cableAssemblage[i]->setLength(length);
		cableAssemblage[i]->setStrength(strength);

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
		std::cout << "   Area: " << cableAssemblage[i].getArea() << std::endl;
		std::cout << "   Modulus of elasticity: " << cableAssemblage[i].getElasticModulus() << std::endl;
		std::cout << "   Length: " << cableAssemblage[i].getLength() << std::endl;
		std::cout << "   Strength: " << cableAssemblage[i].getStrength() << std::endl;
	}	
}

bool checkStrength(Cable* cableAssemblage, int numberCables, double weight)
{
	bool result = true;
	int i;

	for (i = 0; i < numberCables; i++)
	{
		if (cableAssemblage[i].failure(weight))
		{
			result = false;
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
	free(cableAssemblage);
}