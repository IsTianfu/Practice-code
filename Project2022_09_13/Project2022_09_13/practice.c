#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//循环语句while2.

//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar就读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };//password这个数组可以放20个字符，默认20个字符全为0
//	printf("请输入密码:>");//>无意义，仅为好看
//	scanf("%s", password);//password不用取地址，因为password是个数组，数组的数组名本来就是个地址
//	printf("请确认密码(Y/N:>");
	//清理缓冲区中单个字符（getchar、scanf等输入函数从键盘输入的内容里拿东西的区域，若此区域没有内容，则等待键盘输入内容）
	//getchar();//处理 字符'\n'（回车） 把\n读了但是没有放入数组打印出来，相当于直接消耗掉了但是对下面代码无影响
	
	//清理缓冲区多个字符
	//int tmp = 0;
	//while ((tmp = getchar()) != '\n')//!=（不等于）
	//{
	//	;//空语句，当tmp不等于\n时输出空语句，当tmp等于\n时跳出
	//}
	//输入一个字符我获取，所以下面用getchar连接
	/* int ch = getchar();
	 if (ch == 'Y')
	 {
		 printf("确认成功\n");
	 }
	 else
	 {
		 printf("确认失败\n");
	 }
	return 0;
}*/

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//ch被赋值成getchar的返回值与EOF比较
//	{
//		if (ch < '0' || ch>'9')//如果不是数字字符（0~9是数字字符）就continue跳过本次循环，后面代码就不打印
//			continue;
//		putchar(ch);//如果是数字字符就没进入if语句直接打印，所以这个代码只打印数字字符
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;//初始化部分
//	while(i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//循环变量的调整部分
//	}
//	return 0;
//}
//三部分中的任何一个发生变化都会影响到循环


//for循环语句
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//break在for循环中
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//i=5时跳出只打印1、2、3、4
//		printf("%d ", i);
//	}
//	return 0;
//}



//continue在for循环中

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//结果跳过5
//		printf("%d ", i);
//	}
//	return 0;
//}

//for语句的循环控制变量
//一些建议：
//1.不可在for循环体内修改循环变量，防止for循环失去控制。
//2.建议for语句的循环控制变量的取值采用“前闭合后开区间”写法。



int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0(初始化部分); i < 10（判断部分）; i++（调整部分）)//三个部分都可以省略，其中判断部分的省略，判断部分恒为真，死循环。
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


