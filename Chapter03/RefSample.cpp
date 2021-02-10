#include "header.h"

// 제작자 코드
class CRefTest
{
private:
	// 참조형 멤버는 객체가 생성될 때 반드시 초기화해야 한다.
	int &m_nData;
	
public:
	// 참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
	CRefTest(int &rParam) : m_nData(rParam) {}
	int GetData() { return m_nData; }
};

// 사용자 코드
int main()
{
	int a = 10;
	CRefTest ref(a);
	
	cout << ref.GetData() << endl;
	
	// 참조 원본인 a의 값이 수정되었다.
	a = 20;
	cout << ref.GetData() << endl;
	
	return 0;
}