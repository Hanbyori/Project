// 다음과 같은 int 배열을 오름차순으로 정렬한 후 화면에 결과를 출력하는 프로그램을 작성하세요. 
// 정렬 방법은 상관없습니다. 단, 화면에 배열 내용을 출력할 때에는 반드시 '범위 기반 for'문을 사용해야 합니다.
// int aList[5] = {10, 20, 30, 40, 50};
#include "header.h"

int main()
{
	int aList[5] = {20, 50, 10, 30, 40};
	
	cout << "정렬 전 : ";
	
	for(auto n : aList)
	{
		cout << n << " ";
	}
	cout << endl;
	
	sort(aList, aList + 5);
	
	cout << "정렬 후 : ";
	
	for(auto n : aList)
	{
		cout << n << " ";
	}
	cout << endl;

	return 0;
}