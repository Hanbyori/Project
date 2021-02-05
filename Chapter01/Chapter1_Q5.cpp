// 상수형 참조가 기존의 참조 형식과 크게 다른점이 무엇인지 답하세요.
#include "header.h"

int main()
{
	// 상수형 참조가 r-value를 말하는 듯 싶다.
	// 일반 참조형은 변수만 참조할 수 있지만 r-value는 변수, 상수 모두 해당된다.
	int &&data = 3;
	
	return 0;
}