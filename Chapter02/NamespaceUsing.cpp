#include "header.h"

namespace TEST
{
	int g_nData = 100;
	
	void TestFunc(void)
	{
		cout << "TEST::TestFunc()" << endl;
	}
}

// TEST 네임스페이스에 using 선언을 한다.
using namespace TEST;

int main()
{
	TestFunc();
	cout << g_nData << endl;
	
	return 0;
}