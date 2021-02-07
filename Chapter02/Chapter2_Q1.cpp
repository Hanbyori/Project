#include "header.h"

// 다음 두 함수 원형에서 잘못된 점은 무엇인지 답하세요.
TestFunc(int nParam1 = 5, int nParam2, int nParam3 = 10) // 초깃값을 기술할 때 중간은 비울 수 없음
TestFunc(int nParam1 = 5, int nParam2)// 초깃값을 기술할 때 오른쪽부터 기술해야 함

int main()
{
	return 0;
}