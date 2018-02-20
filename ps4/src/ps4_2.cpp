/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-02-04
 * Project: ps4
 * File: ps4_2.cpp
 */
 
/* Description: */
 
/* Libraries: */
 
/* Headers: */
#include "ps4_2.h"

void readPoints(Point** p, int numPoints)
{
	
	int x = 0;
	int y = 0;

	for (int i = 0; i < numPoints; i++)
	{
		std::cout << "x: ";
		std::cin >> x;

		std::cout << "y: ";
		std::cin >> y;

		p[i] = new Point(x, y);

		std::cout << std::endl;
	}

	return;
}

void printPoints(Point** p, int numPoints)
{
	for (int i = 0; i < numPoints; i++)
	{
		std::cout << "Point " << i + 1 << ": " << *p[i] << std::endl;
	}
}

void quickSortPoints(Point** p, int start, int end, double(Point::*m)())
{
	if (start < end)
	{
		int pivot = partitionPoints(p, start, end, m);
		quickSortPoints(p, start, pivot - 1, m);
		quickSortPoints(p, pivot + 1, end, m);
	}

	return;
}

int partitionPoints(Point** p, int start, int end, double(Point::*m)())
{
	int pivot = start;
	Point* temp = NULL;

	for (int i = start; i < end; i++)
	{
		/* if current value is less than pivot value */
		if ((*p[i].*m)() < (*p[end].*m)())
		{
			/* swap values and incriment pivot */
			temp = p[i];
			p[i] = p[pivot];
			p[pivot] = temp;
			++pivot;
		}
	}

	/* swap pivot to correct position */
	temp = p[end];
	p[end] = p[pivot];
	p[pivot] = temp;

	return pivot;
}