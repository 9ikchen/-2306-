#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 1; i <= a;i++)         //�����б仯
		{
			for (int j = 1;j <=i;j++)    //�����б仯
			{
				printf("* ");
			}
			printf("\n");

		}
	}

	return 0;
}