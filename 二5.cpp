#include <iostream>
using namespace std;
int main()
{
	int letter = 0, space = 0, digit = 0, other = 0;    //������ĸ���ո����֣������ĸ���Ϊ0
	char c;         //���ַ�����ֵ��c
	cout << "������һ���ַ���Ӣ����ĸ���ո������ַ��������ַ�����" << endl;
	while ((c = getchar()) != '\n')         //ʹ��whileѭ���ṹ��getchar()�������������ܼ��̵�����ֵ�����س�Ϊֹ
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))   //����ASSIC���������ַ����͵��ж�,��ѭ����Ƕ��if��䣬��ÿһ��������ַ������ж�
			letter++; //ͳ����ĸ
        else if (c >= '0' && c <= '9')
			digit++;  //ͳ������
		else if (c == ' ')
			space++;   //ͳ�ƿո�
		else
			other++;  //ͳ������

	}
	cout << "��ĸ����" << letter << "��������" << digit << "�ո�����" << space << "�����ַ�����" << other << endl;

	return 0;
}