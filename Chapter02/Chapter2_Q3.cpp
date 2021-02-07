// 함수를 다중 정의하는 것보다는 함수 템플릿이 더 좋은 코드가 될 가능성이 높습니다. 이유를 답하세요.
#include "header.h"

// 함수 다중 정의
int Add(int a, int b){ return a + b; }
int Add(int a, int b, int c){ return a + b + c; }
double Add(double a, double b){ return a + b; }

// 함수 템플릿
template <typename T>
T ADD(T a, T b){ return a + b; }

int main()
{
	// 함수 다중 정의의 경우 각 자료형의 대한 호환을 위해 함수를 많이 정의해야함
	cout << Add(1, 2) << endl;
	cout << Add(1, 2, 3) << endl;
	cout << Add(1.1, 2.2) << endl;
	
	// 템플릿의 경우 자료형 호환이 자동으로 되기 때문에 하나만 정의를 하면 됨
	cout << ADD(1, 2) << endl;
	cout << ADD(1.1, 2.2) << endl;
	
	return 0;
}