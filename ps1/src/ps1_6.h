#ifndef PS1_6_H
#define PS1_6_H
#include <iostream>
#include <stdlib.h>

class Complex
{
	private:
		double real;
		double imaginary;
	
	public:
		Complex(double real=0.0, double imaginary=0.0);
		double get_real();
		double get_imaginary();
		void set_real(double x);
		void set_imaginary(double x);
};

#endif//PS1_6_H

