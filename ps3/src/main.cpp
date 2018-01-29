/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-01-21
 * Project: ps3
 * File: VehicleNode.cpp
 */
 
/* Description: */
 
/* Libraries: */
#include <iostream>
#include <stdlib.h>
 
/* Headers: */
#include "Vehicle.h"
#include "Motorvehicle.h"
#include "Property.h"
#include "Bike.h"
#include "Car.h"
#include "Motorcycle.h"
#include "VehicleNode.h"
 
int main(int argc, char* argv[])
{
	char option = 'x';
	bool subMenu = false;
	VehicleNode* head = NULL;

	while (option != 'q' && option != 'Q')
	{
		if (!subMenu)
		{
			std::cout << "***************************************" << std::endl;
			std::cout << "[A]: Add a vehicle" << std::endl;
			std::cout << "[S]: Show vehicles" << std::endl;
			std::cout << "[N]: Number of Vehicles" << std::endl;
			std::cout << "[F]: Save vehicles to files" << std::endl;
			std::cout << "[Q]: Quit" << std::endl;
			std::cout << "***************************************" << std::endl;
			std::cout << "Your selection: ";
			std::cin >> option;
		}
		
		else
		{
			std::cout << "***************************************" << std::endl;
			std::cout << "[C]: Add a car" << std::endl;
			std::cout << "[M]: Add a motorcycle" << std::endl;
			std::cout << "[B]: Add a bike" << std::endl;
			std::cout << "[Q]: Quit operation" << std::endl;
			std::cout << "***************************************" << std::endl;
			std::cout << "Your selection: ";
			std::cin >> option;
		}

		switch (option)
		{
		case 'a':
		{
			subMenu = true;
			break;
		}

		case 's':
		{
			head->showVehicles(head);
			break;
		}

		case 'n':
		{
			std::cout << "Number of Vehicles: " << head->getVehicle()->getNumberVehicles() << std::endl;
			break;
		}

		case 'f':
		{
			head->output(head);
			break;
		}

		case 'q':
		{
			if (subMenu)
			{
				subMenu = false;
				option = 'x';
			}
			break;
		}

		case 'c':
		{
			Car * c = new Car;
			head = new VehicleNode(head, c);
			break;
		}
		
		case 'm':
		{
			Motorcycle * m = new Motorcycle;
			VehicleNode *vn = new VehicleNode(head, m);
			break;
		}

		case 'b':
		{
			Bike * b = new Bike;
			VehicleNode *vn = new VehicleNode(head, b);
			break;
		}

		default:
		{
			std::cout << "Please choose a valid command" << std::endl;
			break;
		}
			
		};
	}
	return EXIT_SUCCESS;
}
