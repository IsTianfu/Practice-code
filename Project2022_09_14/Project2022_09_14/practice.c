#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//do while()循环
//1~10打印
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//跳出循环，continue跳过某一次循环
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//练习1.计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//1*2*3*4*5=120
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf(" % d\n", ret);
//	return 0;
//}


//练习2.计算1！+2！+3！+···+10!
// 方法一：
// 
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf(" % d\n", sum);
//	return 0;
//}


//方法二：
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;//计算n的阶乘之前，把ret初始为1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	printf(" % d\n", sum);
//	return 0;
//}


//方法二改进版：
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum = sum + ret;
//	}
//	printf(" % d\n", sum);
//	return 0;
//}



//练习3.在一个有序数组中查找具体的某个数字n。
//编写int binsearch(int x,int v[],int n);功能：在V[0]<=V[1]<=V[2]<=...<=V[n-1]的数组中查找X。



