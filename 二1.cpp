#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char c;
	cin >> c;                                          //�����ַ�
	if (islower(c))cout << (char)toupper(c);          //�жϴ�Сд
	else cout << c + 1;                               //��д���ASCII��
	return 0;

}