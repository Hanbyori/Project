#include "main.h"

// 다음 두 함수는 문법적으로 문제가 없습니다.
// 하지만 호출하는 코드에서는 문제가 발생할 수 있습니다. 어떤 문제인지 답하세요.
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
	TestFunc(10, 20); // TestFunc(int, int) 출력
	
	// 컴파일 에러 발생
	TestFunc(10) // TestFunc(int) 인지 TestFunc(int, int) 인지 모호함
	
	return 0;
}