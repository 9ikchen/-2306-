#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char c;
	cin >> c;                                          //接收字符
	if (islower(c))cout << (char)toupper(c);          //判断大小写
	else cout << c + 1;                               //大写输出ASCII码
	return 0;

}