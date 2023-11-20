#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testunint = 65534;
	cout << "output in unsigned int 1 type:" << endl;    
	cout << "output in char type:" << static_cast<char>(testunint)<<endl;
	cout << "output in short type:" << static_cast<short>(testunint) << endl;
	cout << "output in int type:" << static_cast<int>(testunint) << endl;
	cout << "output in double type:" << static_cast<double>(testunint) << endl;
	cout << "output in double type:" << setprecision(4)<<static_cast<double>(testunint) << endl;
	cout << "output in hex unsigned int type:" <<hex<<testunint<< endl;
	cout << "output in oct unsigned int type:" << oct << testunint << endl;
	system("pause");

	double x;
	cout << "请输入一个实数：" << endl;
	cin >> x;
	cout<< static_cast<int>(x) << endl;

	return 0;
}