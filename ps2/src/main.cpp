/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-16
 * Project: ps2
 * File: ps2_3.cpp
 */
 
/* Description: */
 
/* Libraries: */
#include <iostream>
#include <stdlib.h>
 
/* Headers: */
#include "ps2_2.h"
#include "ps2_3.h"
 
int main(int argc, char* argv[])
{
	int assignment;
	std::cout << "Please Choose the Problem Number: ";
	std::cin >> assignment;
	std::cout << std::endl << std::endl;

	if (assignment == 2)
	{
		ElevatorStack elevatorStack;
		char name[20];
		double weight;

		std::cin.clear();
		while (1)
		{
			std::cout << "\n\n Guard's name: ";
			std::cin >> name;

			if (std::cin.eof())	break;

			if (strcmp(name, "POP"))
			{
				std::cout << "\n Weight: ";
				std::cin >> weight;
				elevatorStack.push(name, weight);
			}

			else
				elevatorStack.pop();
		}
		std::cout << "\n\n Exiting the program normally" << std::endl << std::endl;
	}

	else if (assignment == 3)
	{
		Cable *cableAssemblage;
		int numberCables;
		double weight;

		numberCables = readCableData(&cableAssemblage);
		weight = readWeight();

		printCableData(cableAssemblage, numberCables, weight);

		if (checkStrength(cableAssemblage, numberCables, weight))
			determineExtensions(cableAssemblage, numberCables, weight);

		releaseMemory(cableAssemblage);
		return EXIT_SUCCESS;
	}

	else
	{
		std::cout << "Error: Invalid Assignment Selection.  Please select 2 or 3." << std::endl;
	}

		
	return EXIT_SUCCESS;
}
