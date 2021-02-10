#include "header.h"

class CTest
{
public:
	CTest() { cout << "CTest::CTest()" << endl; }
	~CTest() { cout << "~CTest::CTest()" << endl; }
};

int main()
{
	cout << "Begin" << endl;
	
	// new 연산자를 이용해 동적으로 객체를 생성한다.
	CTest *pData = new CTest;
	cout << "Test" << endl;
	
	// delete 연산자를 이용해 객체를 삭제한다.
	delete pData;
	cout << "End" << endl;
	
	return 0;
}