#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("mother fucker\n");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入IT行业：>");
//		printf("那要好好学习么（1/0）？>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("拿个好offer\n");
//	else
//		printf("h回家卖红薯\n");
//	return 0;
//}

//int main()
//{
//	//0表示假，非0就是真(C语言规定）
//	int a = 0;
//	printf("%d\n", !a);//！可以把真变成假，也可以把假变成真，当把假变成真的时候得出的结果为1
//	return 0;
//}
 

//！的用法
//int main
//{
//	if (a)
//	{
//		//如果a为真，做事
//	}
//if (!a)
//{
//	//如果a为假做事
//}
//return 0;
//}

//int main()
//{
//	//sizeof是一个操作符
//	//计算类型或者变量的大小的
//	//sizeof求变量时后面的括号可省略，证明sizeof是操作符而不是函数
//	int a = 10;
//	printf("%d\n", sizeof(int));//求类型时，后面括号不可省略
//	printf("%d\n", sizeof a);
//	return 0;//输出结果为4，因为整型的字节是4
//
//}


//用sizeof计算一个数组
//int main()
//{
//	int arr[10] = { 0 };//这个数组叫arr
//	printf("%d\n", sizeof(arr));
//	//计算数组的总大小，10个元素都是0，每一个元素都是整型，占据4个字节，所以输出结果是40
//	printf("%d\n", sizeof(arr[0]));//计算的是这个数组里面单个元素的大小，所以输出结果为4
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算这个数组内元素个数
//	printf("%d\n", sz);
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	printf("%d\n", a)；//~按位取反（但是这波浪号画不到中间去。。。）
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = ++a;//前置++:先++，后使用,a=10+1=11赋予b
	//printf("%d\n", b);//11
	//printf("%d\n", a);//11


	//int a = 10;
	//int b = a++;//后置++:先使用，再++,a=10赋予b，再a=10+1=11
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11


	//return 0;
//}


	//int main()
	//{
	//	int a = (int)3.14;//3.14是double类型的，int是整型类型，可能丢失精度
	//	//在3.14前面加个括号里面加上一个类型强制把3.14转换成整型，这就是强制类型转换
	//	//类型不匹配时用，但不推荐

	//	printf("%d\n", a);
	//	return 0;
	//}

