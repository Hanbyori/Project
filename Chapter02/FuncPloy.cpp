#include "header.h"

int Add(int a, int b, int c)
{
	cout << "ADD(int, int, int) : ";
	return a + b + c;
}

int Add(int a, int b)
{
	cout << "ADD(int, int) : ";
	return a + b;
}

double Add(double a, double b)
{
	cout << "ADD(double, double) : ";
	return a + b;
}

int main()
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;
	
	return 0;
}