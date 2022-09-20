#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

//打印1000年到两千年之间的闰年
//写法一
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)*/
		//判断y是不是闰年
		//1.被4整除，不能被100整除是闰年
		//2.能被400整除也闰年
	/*{
		if (y % 4 == 0)
		{
			if (y % 100 > 0)
			{
				printf("%d ", y);
				count++;
			}
		}
		if (y % 400 == 0)
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}*/


//写法二
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
		//判断y是不是闰年
		//1.被4整除，不能被100整除是闰年
		//2.能被400整除也是闰年
//	{
//		if (((y % 4 == 0) && (y % 100 > 0)) || (y % 400 == 0))//    ||或者    &&并且
//		{
//			printf("%d ", y);
//				count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//素数即质数（只能被1和它本身整除）
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		判断i是否为素数
//		用2~i-1的数字去试除i，看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;//break跳出的是循环，if语句不是循环语句，for才是
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n\ncount = %d\n", count);
//	return 0;
//}


//#include <math.h>//使用sqrt()所需要引用的头文件，sqrt是浮点型
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//			int j = 0;
//			int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++)//sqrt是个库函数，是用来开平方的，这里对i开平方
//设：判断101是不是素数
//原来是2~100之间的数字去除的
//2~sqrt(101)之间的数字去试除就行
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n\ncount = %d\n", count);
//	return 0;
//}



//go to语句(go to语句可能会打乱代码的执行顺序）
//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}


//关机程序
//只要运行起来，电脑在一分钟内关机，如果输入：我是猪，就取消关机
//命令提示符
//shutdown -s -t 300（三百秒后关机）
//shutdown -a（取消关机）


//关机(用了goto语句）
//C语言提供了一个函数：system()- 执行系统命令
//int main()
//{
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//要使用system所需要引用的头文件：<stdlib.h>
//
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入:我是猪，就取消关机\n");
//	scanf("%s", input);//%s是用来接受或打印字符串的,本来scanf后面是要&（取地址）的，但是input是数组，数组名本来就是一个地址，所有这里不需要加上&
//	if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用直接用==的，两单字符比就可以用，两字符串比应该要用函数strcmp(),全称：string compare,使用strcmp（）所需引用的头文件<string.h>
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//again是个跳转符号
//	}
//	return 0;
//}

//goto语句只能在一个函数范围内跳转，不能跨函数
//如
//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}



//关机(不用goto语句）
int main()
{
	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 60");//要使用system所需要引用的头文件：<stdlib.h>

	while (1)
	{
		printf("请注意，你的电脑在一分钟内关机，如果输入:我是猪，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}