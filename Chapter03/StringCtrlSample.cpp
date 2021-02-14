#include "MyString.h"

int main()
{
	CMyString strData;
	strData.SetString("Hello");
	cout << strData.GetString() << endl;
	strData.SetString("World");
	cout << strData.GetString() << endl;
	
	return 0;
}