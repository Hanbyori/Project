#include "header.h"

int nData = 100;

namespace TEST
{
	int nData = 200;
}

using namespace TEST;
int main()
{
	// 컴파일 에러 발생
	// 전역 변수와 네임스페이스에 속한 변수 모두가 해당되기 때문
	// ::nData라고 범위 지정 식별자를 기술하거나 TEST::nData라고 네임스페이스를 기술해야 함
	cout << nData << endl;
	
	return 0;
}