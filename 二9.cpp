#include<iostream>
using namespace std;
int main()
{
   int n, s, d;  //��������������������ƻ����
    d = 0;
	s = 0;
	for (int i = 2;i <= 100;i *= 2)   //ƻ��������

	{

		n = i;
		s = s + n;
		d++;

	}

	cout << 0.8 * s / d << endl;
	return 0;
}