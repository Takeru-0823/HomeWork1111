#include <iostream>
using namespace std;

void swap_ptr(char* pStr1, char* pStr2);

int main()
{
	char str1[] = "abcd";
	char str2[] = "ABCD";

	char* pStr1 = str1;
	char* pStr2 = str2;

	swap_ptr(pStr1, pStr2);

	cout << pStr1 << endl;
	cout << pStr2 << endl;
}

void swap_ptr(char* pStr1, char* pStr2)
{

}