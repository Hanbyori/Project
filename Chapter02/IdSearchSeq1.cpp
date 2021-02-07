#include "header.h"

int nData(20);

int main()
{
	int nData(10);
	
	// 가장 먼저 검색하는 범위는 식별자에 접근하는 코드가 속한 블록 범위
	// 검색 순서상 접근자 코드가 속한 블록 범위가 우선하므로 지역변수의 값을 출력
	cout << nData << endl;
	
	return 0;
}