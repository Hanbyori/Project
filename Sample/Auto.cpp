#include "header.h"

int main()
{
	int a =10;
	int b(a);
	auto c(b);
	
	cout << a + b + c;
	
	return 0;
}