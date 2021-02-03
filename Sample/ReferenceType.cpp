// Use references when you can, and pointers when you have to
// 사용할 수 있다면 참조자를, 어쩔 수 없다면 포인터를 써라

#include "header.h"

int main()
{
	// int *pData = &3	-> 불가능
	// int &rData = 3	-> 상수에 대한 참조는 불가능
	// int &rData;		-> 참조 원본이 없으므로 불가능
	
	int nData = 10;
	
	// nData 변수에 대한 참조자 선언
	int &ref = nData;
	
	//참조자의 값을 변경하면 원본도 변경된다!
	ref = 20;
	cout << nData << endl;
	
	// 포인터를 쓰는 것과 비슷하다.
	int *pnData = &nData;
	*pnData = 30;
	cout << nData << endl;
	
	return 0;
}