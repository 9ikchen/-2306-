#include <iostream>
using namespace std;
int main()
{
	int letter = 0, space = 0, digit = 0, other = 0;    //定义字母，空格，数字，其他的个数为0
	char c;         //将字符串赋值给c
	cout << "请输入一串字符（英文字母、空格、数字字符和其它字符）：" << endl;
	while ((c = getchar()) != '\n')         //使用while循环结构和getchar()函数，连续接受键盘的输入值，到回车为止
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))   //利用ASSIC码来进行字符类型的判断,在循环中嵌套if语句，对每一个输入的字符进行判断
			letter++; //统计字母
        else if (c >= '0' && c <= '9')
			digit++;  //统计数字
		else if (c == ' ')
			space++;   //统计空格
		else
			other++;  //统计其他

	}
	cout << "字母数：" << letter << "数字数：" << digit << "空格数；" << space << "其它字符数：" << other << endl;

	return 0;
}