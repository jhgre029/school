#include "hourglass.h"

HourGlass::HourGlass(int n)
{
	this->n = n;
}

int HourGlass::get_n()
{
	return this->n;
}

void HourGlass::set_n(int n)
{
	this->n = n;
}

bool HourGlass::valid()
{
	if (get_n() <= 1)
	{
		std::cout << "Error: Input must be greater than 1" << std::endl;
		return false;
	}
	
	else if ((get_n() % 2) == 0)
	{
		std::cout << "Error: Input must be odd" << std::endl;
		return false;
	}

	else
	{
		return true;
	}
}

void HourGlass::print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1)
			{
				std::cout << '*';
			}

			else if (i == j || i == n-j-1)
			{
				std::cout << '*';
			}
			
			else
			{
				std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
}
