#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f;
	cout << "�����뻪���¶ȣ�" << endl;   //���뻪���¶�
	cin >> f;
	double F;
	F =( (f-32)/1.8);                 //ת����ʽ
	cout << "���϶��ǣ�" << setprecision(5)<<F<< endl;   //������϶�
	return 0;
}