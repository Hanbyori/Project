#include "header.h"

int main()
{
	int nInput = 0;
	cout << "11 이상의 정수를 입력하세요 : ";
	cin >> nInput;
	
	if(nInput > 10)
	{
		// {} 범위에서 식별자 선언을 찾지 못한다면 중첩된 블록 범위의 상위로 검색 확장
		cout << nInput << endl;
	}
	else
		cout << "Error" << endl;
	
	return 0;
}