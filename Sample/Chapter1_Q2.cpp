// C++11에서 auto 예약어는 어떤 의미인지 쓰고 코드로 예를 보이세요.
#include "header.h"

int main()
{
	// auto 예약어는 자료형을 지정하지 않아도, 초깃값에 따라 자료형이 자동으로 정해진다.
	auto temp1 = 5;
	auto temp2 = "홍길동";

	cout << "temp1 값 : " << temp1 << endl;
	cout << "temp2 값 : " << temp2 << endl;
	
	return 0;
}