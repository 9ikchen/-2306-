#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cin >> x;          //输入x值
	if (0 < x &&x<1)    //进行第一次判断
	{
		y = (3 - 2 * x);  //满足第一个条件运算
	}
	else
	{
		if (x < 5 && x >= 1) //第二次判断
		  {
			y = (2 / (4 * x) + 1);  //满足第二个条件的运算
		   }
		else
		  {
			if (x < 10 && x >= 5); //第三个条件的判断
			{
				y = x * x;      //满足第三个条件进行运算
			}
		   }

	}
	cout << y << endl;   //输出y值
	return 0;

}