#include "ps1_6.h"

/* Solution for default constructor */
Complex::Complex(double real, double imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}

/* Solution to get_real */
double Complex::get_real()
{
	return this->real;
}

/* Solution to get_imaginary */
double Complex::get_imaginary()
{
	return this->imaginary;
}

/* Solution to set_real() */
void Complex::set_real(double x)
{
	real = x;
}

/* Solution to set_imaginary */
void Complex::set_imaginary(double x)
{
	imaginary = x;
}
