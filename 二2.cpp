#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cin >> x;          //����xֵ
	if (0 < x &&x<1)    //���е�һ���ж�
	{
		y = (3 - 2 * x);  //�����һ����������
	}
	else
	{
		if (x < 5 && x >= 1) //�ڶ����ж�
		  {
			y = (2 / (4 * x) + 1);  //����ڶ�������������
		   }
		else
		  {
			if (x < 10 && x >= 5); //�������������ж�
			{
				y = x * x;      //���������������������
			}
		   }

	}
	cout << y << endl;   //���yֵ
	return 0;

}