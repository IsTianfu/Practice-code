#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

//练习1.编写程序数一下1~100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//除10取余数9
//			count++;
//		if (i / 10 == 9)//除10取商9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//练习2.编写程序计算1/1-1/2+1/3-1/4+1/5-...+1/99-1/100的值，并打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;//sum是不可以声明为int类型
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

//优化版
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


//练习3.编写程序求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//arr[0]表示arr数组中的第一个元素，此处表示剩下的元素按顺序与第一个元素比大小，谁大谁更新，然后继续与剩下元素比大小，重复步骤直至程序结束
//	int i = 0;//i指的是下标，数组下标从0开始
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


//练习4.编写程序在屏幕上输出9*9乘法口诀表
int main()
{
	int i = 1;
	//行数
	for (i = 1; i <= 9; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);//%2d后面的空格就是一行中两个答案之间的空格（%2d表示每个输出右对齐打印两位，不够两位的用空格填充）
			//%-2d表示每个输出左对齐打印两位，不够两位的用空格填充
		}
		printf("\n");//循环走一次换一行
	}
	return 0;
}