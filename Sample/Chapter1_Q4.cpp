// int에 대한 참조 형식을 매개변수로 받고 두 변수의 값을 교환하는 함수를 작성하세요.
// 함수 원형은 void Swap(int &a, int&b)입니다.
#include "header.h"

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 5, b = 10;
	
	cout << "Swap 전 : " << a << " " << b << endl;
	
	Swap(a, b);
	
	cout << "Swap 후 : " << a << " " << b << endl;
	
	return 0;
}