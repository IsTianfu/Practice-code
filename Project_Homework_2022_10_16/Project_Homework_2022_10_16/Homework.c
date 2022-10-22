#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//作业1.编写程序判断一个整数是否能被5整除
//输入描述：输入包括一个整数M（1≤M≤100, 000）。
//输出描述：输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。
//int main()
//{
//    int M = 0;
//    scanf("%d", &M);
//    if ((M >= 1) && (M <= 100000))
//    {
//        if (M % 5 == 0)
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//    }
//    else
//    {
//        printf("输错了，请重新输入\n");
//    }
//    return 0;
//}



//作业2.已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//输入描述：一行，输入一个整数x。（ - 10000 < x < 10000）
//输出描述：一行，输出y的值。

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if ((x > -10000) && (x < 10000))
//	{
//		if (x > 0)
//		{
//			int y = -1;
//			printf("\n%d\n", y);
//		}
//		else if (x == 0)
//		{
//			int y = 0;
//			printf("\n%d\n", y);
//		}
//		else
//		{
//			int y = 1;
//			printf("\n%d\n", y);
//		}
//	}
//	else
//	{
//		printf("超过取值范围，请重新输入！\n");
//	}
//	return 0;
//}



//作业3.给定两个整数a和b(0 < a, b < 10, 000)，计算a除以b的整数商和余数。
//输入描述：一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出描述：一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if ((a > 0) && (b < 10000) && (b != 0) && (a !=0))
	{
		int tmp = a / b;
		int tmd = a % b;
		printf("%d %d\n", tmp, tmd);
	}
	else
	{
		printf("超过取值范围，请重新输入\n");
	}
	return 0;
}