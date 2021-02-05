// 자신의 이름과 나이를 입력받고 "나의 이름은 홍길동이고, 20살입니다."
// 라고 출력하는 프로그램을 작성하세요. 단, 반드시 std::cout, cin을 이용해 작성합니다.
#include "header.h"

int main()
{
	int age;
	string name;
	
	cout << "이름을 입력하세요 : ";
	cin >> name;
	
	cout << "나이를 입력하세요 : ";
	cin >> age;
	
	cout << "나의 이름은 " << name << "이고, " << age << "살입니다." << endl;
	
	return 0;
}