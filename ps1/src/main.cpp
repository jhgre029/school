#include "ps1_6.h"
#include "hourglass.h"
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
/***********************************************************/
/* Problem 5 */
/***********************************************************/
	std::cout << "Problem 5: " << std::endl;
	if (argc != 2)
	{
		std::cout << "Usage: ps1 n" << std::endl;
		return EXIT_FAILURE;
	}
	
	int n = 1;
	sscanf(argv[1], "%d", &n);
	HourGlass h(n);
	if (!h.valid())
	{
		return EXIT_FAILURE;
	}

	h.print();
	
/***********************************************************/
/* Problem 6 */
/***********************************************************/
	std::cout << "Problem 6: " << std::endl;
	
	Complex c1;
	std::cout << "\tc1 = " << c1.get_real()
		<< "+" << c1.get_imaginary() << "i"
		<< std::endl;
	
	Complex c2(7.25,-8.5);
	std::cout << "\tc2 = " << c2.get_real()
		<< "+" << c2.get_imaginary() << "i"
		<< std::endl;

	c1.set_real(1.7);
	c1.set_imaginary(-6.7);
	std::cout << "\tc1 = " << c1.get_real()
		<< "+" << c1.get_imaginary() << "i"
		<< std::endl;

	return EXIT_SUCCESS;
}
