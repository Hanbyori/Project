// char[12] 배열 메모리를 new 연산자로 동적 할당하고 해제하는 코드 예를 작성하세요.
#include "header.h"

int main()
{
	char *temp = new char[12];
	
	cout << "문자열을 입력하세요 : ";
	cin >> temp;
	
	cout << temp << endl;
	
	delete[] temp;
	
	return 0;
}