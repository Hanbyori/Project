#include "header.h"

class CTest
{
public:
	// 디폴트 생성자 선언
	CTest() = default;
	int m_Data = 5;
};

// 클래스 외부에서 디폴트 생성자 정의
// 컴파일러가 제공하는 디폴트 생성자의 원형
// CTest::CTest() {}

int main()
{
	CTest a;
	cout << a.m_Data << endl;
}