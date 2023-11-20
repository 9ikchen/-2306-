#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d;          //求最大公约数
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	int x = a < b ? a : b;    //找到较小的那个数
	for (x;x >= 1;x--)
	{
		if (a % x == 0 && b % x == 0)  //当两次除法后余数为0，找到最大公约数
			break;
	}
	cout << "最大公约数为："<<x << endl;
	c = (a * b );              //公式最小公倍数=a*b%最大公约数
	d = (c/x);
	cout << "最小公倍数为；"<<d<< endl; 

	return 0;

}