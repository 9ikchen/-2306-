#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f;
	cout << "请输入华氏温度：" << endl;   //输入华氏温度
	cin >> f;
	double F;
	F =( (f-32)/1.8);                 //转换算式
	cout << "摄氏度是：" << setprecision(5)<<F<< endl;   //输出摄氏度
	return 0;
}