#include "header.h"

void TestFunc(int a)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int)" << endl;
}

int main()
{
	TestFunc(5);
	
	return 0;
}