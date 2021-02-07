#include "header.h"

// 다음 코드의 실행 결과를 작성하세요.
int nData = 200;

namespace TEST
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}

int main()
{
	// 식별자 검색 순서에 관한 문제
	// 네임스페이스 안 nData가 최근에 선언되었기 때문에 100을 출력함.
	TEST::TestFunc();
	
	return 0;
}