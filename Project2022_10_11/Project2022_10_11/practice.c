#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

//��ϰ1.��д������һ��1~100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��10ȡ����9
//			count++;
//		if (i / 10 == 9)//��10ȡ��9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//��ϰ2.��д�������1/1-1/2+1/3-1/4+1/5-...+1/99-1/100��ֵ������ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;//sum�ǲ���������Ϊint����
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//		sum += 1.0 / i;
//	}
//	printf(" %f\n", sum);
//	return 0;
//}

//�Ż���
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf(" %f\n", sum);
//	return 0;
//}


//��ϰ3.��д������10�������е����ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//arr[0]��ʾarr�����еĵ�һ��Ԫ�أ��˴���ʾʣ�µ�Ԫ�ذ�˳�����һ��Ԫ�رȴ�С��˭��˭���£�Ȼ�������ʣ��Ԫ�رȴ�С���ظ�����ֱ���������
//	int i = 0;//iָ�����±꣬�����±��0��ʼ
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//��ϰ4.��д��������Ļ�����9*9�˷��ھ���
int main()
{
	int i = 1;
	//����
	for (i = 1; i <= 9; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);//%2d����Ŀո����һ����������֮��Ŀո�%2d��ʾÿ������Ҷ����ӡ��λ��������λ���ÿո���䣩
			//%-2d��ʾÿ�����������ӡ��λ��������λ���ÿո����
		}
		printf("\n");//ѭ����һ�λ�һ��
	}
	return 0;
}