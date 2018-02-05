/* Name: Jacob Grendahl
 * NetID: jhgrendahl
 * Date: 2018-02-04
 * Project: ps4
 * File: ps4_1.h
 */
 
/* Description: */
 
#ifndef PS4_1
#define PS4_1
/* Libraries: */
 
/* Headers: */
#include <iostream>
#include <string> 
#include <fstream>

template<typename T>
void readData(T &data, int &year, int &duration)
{
	int i = 0;
	std::string filename;
	std::ifstream inFile;
	duration = 0;
	year = 0;

	/* Get year from user */
	std::cout << "First Year: ";
	std::cin >> year;

	/* Get filename from user */
	std::cout << "File with data: ";
	std::cin >> filename;

	/* Open file specified by user */
	inFile.open(filename.c_str(), std::ios::in);
	if (!inFile.is_open())
	{
		std::cout << "Could not open " << filename << ". Please make sure the file exists." << std::endl;
		return;
	}

	/* Read from file specified by user */
	while (inFile >> data[duration][i])
	{
		++i;

		if (i == 12)
		{
			i = 0;
			++duration;
		}
	}
	inFile.close();
}

template<typename T>
void writeInvertedData(T data, int year, int duration)
{
	int i = 0;
	int j = 0;
	std::string filename;
	std::ofstream outFile;

	/* Get users store location */
	std::cout << "File to store data: ";
	std::cin >> filename;

	/* Attempt to open file specified by user */
	outFile.open(filename.c_str(), std::ios::out);
	if (!outFile.is_open())
	{
		std::cout << "Could not open " << filename << "." << std::endl;
		return;
	}

	/* Set up header for file */
	while (j < duration)
	{
		if (j == 0)
		{
			outFile << "Month\t" << year << "\t";
			j++;
		}

		else if (j == duration - 1)
		{
			outFile << year + j << std::endl;
			j++;
		}

		else
		{
			outFile << year + j << "\t";
			j++;
		}		
	}

	/* Print the rest of the file */
	for (i = 0; i < 12; i++)
	{
		outFile << i + 1 << "\t\t";
		for (j = 0; j < duration; j++)
		{
			outFile << data[j][i] << "\t";
		}
		outFile << std::endl;
	}

}

#endif