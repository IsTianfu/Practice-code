#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//分支语句switch（整型）
//int main()
//{
	/*int day = 0;
	scanf("%d", &day);
	switch (day)*/
		//可以放入多个语句项
		//day是几，就会从case几进去，并把后面的语句也执行完(没加break）
		//在语句项下一行加上break表示跳出，停止，此时day是几，就只执行几的语句，不往下走
		//即case是入口break是出口*/
	/*{
	case 1:
		printf("星期1\n");
		break;//break只要符合需求，可以去掉
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}
	return 0;
}*/


//1~5输出工作日
//6~7输出休息日

//int main()
//{
//		int day = 0;
//		scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default://默认除1~7以外的输入均为错误
//			printf("输入错误\n");
//			break;
//		}
//	return 0;
//}


//while循环1.

//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
	//在while循环中，break用于永久的终止循环
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
	//continue的作用跳过本次循环continue后边的代码，直接区判断部分，看是否进行下一次循环
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

