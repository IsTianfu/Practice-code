#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>




//猜数字游戏
//1.自动产生一个1~100之间的随机数
//2.猜数字
//a.猜对了，就恭喜你，游戏结束
//b.你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜到
//3.游戏可以一直玩，除非退出游戏



#include <stdlib.h>//使用库函数rand所需要引用的头文件
#include <time.h>//使用time函数所需要引用的头文件
//void menu()//menu不是库函数，所以要自己实现这个函数
//{
//	printf("******************************\n");
//	printf("********   1.play    *********\n");
//	printf("********   0.exit    *********\n");
//	printf("******************************\n");
//}
//void game()//实现game函数，把游戏的逻辑分装到game函数里头去
//{
	//猜数字游戏
	//1.生成随机数
	//rand函数返回了一个0~32767之间的数字
	//时间 - 时间戳（由时间转化出来的数字)
	/*int ret = rand()%100+1;*///%100的余数是0~99，然后+1，范围就是一百
	//对生成的随机数字取模，任何数字的模100肯定是0~99，余数不可能超过100
	//printf("%d\n", ret);

	//2.猜数字
/*	int guess = 0;
	while (1)*///死循环让我们猜直到猜到为止
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//整一串代码表示如何产生一个随机数（在调用rand之前，还得调用srand函数来设置这个随机数的生成器），srand函数表示设置一个随机的起点
//	//srand的使用也需要引用<stdlib.h>头文件
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)//switch是多分支选择语句
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default://default是默认其他选项
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//编写代码将三个整数按大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
	//输入
	//scanf("%d%d%d", &a, &b, &c);
	//调整顺序（调整完再输出）
//	if (a < b)//a>b是应该的，不用动
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出(从大到小输出）
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}




//写一个代码打印1~100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i是否为3的倍数
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//给定两个数，求这个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//假如m=24,n=18
//	int max = 0;
	//假设最大公约数就是m和n的较小值
//	if (m > n)
//		max = n;//max这里是最大公约数的意思
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//用辗转相除法再求一边
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//m=24,n=18
//	int t = 0;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数:%d\n", n);
//	return 0;
//}
//最小公倍数=m*n/最大公约数




//打印1000年到两千年之间的闰年
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
//判断y是不是闰年
//1.被4整除，不能被100整除是闰年
//2.能被400整除也闰年
	{
		if (y % 4 == 0)
			printf("%d ", y)
		if (y % 400 == 0)

		if (y % 100 > 0)
		break;

	}
	return 0;
}