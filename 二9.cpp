#include<iostream>
using namespace std;
int main()
{
   int n, s, d;  //定义天数，单日卖出的苹果数
    d = 0;
	s = 0;
	for (int i = 2;i <= 100;i *= 2)   //苹果数翻倍

	{

		n = i;
		s = s + n;
		d++;

	}

	cout << 0.8 * s / d << endl;
	return 0;
}