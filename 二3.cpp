#include <iostream>
using namespace std;
int main()
{
	int a, b, c,l;
	cout << "请输入三角形的三条边：" <<endl;
	cin >> a >> b >> c;
	if (a + b> c && a + c > b && b + c > a)
	{
		l = (a + b + c);
		cout << "三角形的周长是；" << l << endl;
	}
	else
	{
		cout << "这不是三角形！" << endl;
	}
	if (a == b || a == c || b == c);
	{
		cout << "这是等腰三角形" << endl;
	}
	return 0;
}