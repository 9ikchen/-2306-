#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d;          //�����Լ��
	cout << "��������������" << endl;
	cin >> a >> b;
	int x = a < b ? a : b;    //�ҵ���С���Ǹ���
	for (x;x >= 1;x--)
	{
		if (a % x == 0 && b % x == 0)  //�����γ���������Ϊ0���ҵ����Լ��
			break;
	}
	cout << "���Լ��Ϊ��"<<x << endl;
	c = (a * b );              //��ʽ��С������=a*b%���Լ��
	d = (c/x);
	cout << "��С������Ϊ��"<<d<< endl; 

	return 0;

}