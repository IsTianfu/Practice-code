#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>



//��ֵ���������㺯��(�������ղ�ֵ��

#define N 3//��ֵ�ڵ����
void main()
{
	int n = N;
	int i,j;
	double x[N] = { 100,121,144 };
	double y[N] = { 10,11,12 };
	double x0 = 115, y0 = 0;
	double l;
	for (i = 0; i < n; i++)
	{
		l = 1.0;
		for (j = 0; j < n + 1; j++)
		{
			if (j != i)
			{
				l = l * (x0 - x[j]) / (x[i] - x[j]);
			}
			y0 = y0 + y[i] * l;
		}
	}
	printf("%f\n", y0);
}