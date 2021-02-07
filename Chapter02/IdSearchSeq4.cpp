#include "header.h"

int nData = 100;

namespace TEST
{
	int nData = 200;
}

int main()
{
	// 네임스페이스를 기술하지 않았으므로 전역 변수값 출력
	cout << nData << endl;
	
	return 0;
}