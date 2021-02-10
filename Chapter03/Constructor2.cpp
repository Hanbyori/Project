#include "header.h"

class CTest
{
private:
	int m_nData;
	
public:
	// 생성자의 매개변수로 전달된 값으로 멤버 변수를 초기화한다.
	CTest(int nParam) : m_nData(nParam) { cout << "CTest::CTest()" << endl; }
	
	// 생성할 때 매개변수로 받은 값을 출력한다.
	~CTest() { cout << "~CTest:;CTest() " << m_nData << endl; }
};

int main()
{
	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;
	
	return 0;
}