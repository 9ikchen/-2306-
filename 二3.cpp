#include <iostream>
using namespace std;
int main()
{
	int a, b, c,l;
	cout << "�����������ε������ߣ�" <<endl;
	cin >> a >> b >> c;
	if (a + b> c && a + c > b && b + c > a)
	{
		l = (a + b + c);
		cout << "�����ε��ܳ��ǣ�" << l << endl;
	}
	else
	{
		cout << "�ⲻ�������Σ�" << endl;
	}
	if (a == b || a == c || b == c);
	{
		cout << "���ǵ���������" << endl;
	}
	return 0;
}