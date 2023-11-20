#include<iostream>
using namespace std;
int main()
{
	double pi = 3.14;      //定义常量
	double r ;
	cout << "请输入半径" << endl;   //输入半径    
	cin >> r;

		double h;
		cout << "请输入高度" << endl;    //输入高度
		cin >> h;

		double v;
		v = (pi * r * r/3);   //输入公式
		cout << "圆锥的体积是=" <<v<< endl;  //输出体积
  return 0;
}

