#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,z;   //定义判断运算方式的符号
	double x, y, v;  //定义参与运算的数字
    cout << "请输入两个数字：" << endl;
	cin >> x >> y;
	cout << "请输入运算方式（1加2减3乘4除）：" << endl;
	cin >> z;
	switch (z)
	{
	    case 1:
		    v= (x + y);
		    cout << "结果是：" << v << endl;
	    break;
	   
        case 2:
		    v = (x - y);
	        cout << "结果是：" << v << endl;
		break; 
		
        case 3:
	        v = (x * y);
			cout << "结果是：" << v << endl;
	    break;
		

		case 4:
			if (y== 0)
				cout << "除数为0，无法运算，请重新输入！" << endl;
		    v = (x / y);
			cout << "结果是：" << v << endl;
			
	   break;
		

	    default:                         //输出非运算符号
	
			cout << "无法计算！" << endl;     
	}

	return 0;
}