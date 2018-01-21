#ifndef HOURGLASS_H
#define HOURGLASS_H
#include <iostream>

class HourGlass
{
	private:
		int n;
	public:
		HourGlass(int n = 0);
		int get_n();
		void set_n(int n);
		bool valid();
		void print();
};
#endif//HOURGLASS_H
