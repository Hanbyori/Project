#include "header.h"

int nData(20);

namespace TEST
{
	// 1번 행부터 마지막 행까지 순차적으로 해석
	// 가장 최근에 선언된 변수이기 때문에 100 출력
	int nData = 100;
	
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}

int main()
{
	TEST::TestFunc();
	
	return 0;
}