#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//逻辑操作符
//int main()
//{
	/*int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);*///因为&&两边都是真，所以得出结果为1，C语言中1为真，0为假
	//假设b=0，&&里面有一个为假就为假
	//int a = 3;//a为真b为假
	//int b = 0;
	//int c = a || b;//逻辑或里面只要有一边为真，那就是真
	//printf("%d\n", c);

	//return 0;
//}





//条件操作符（三目操作符）
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;

	/*if (a > b)
		max = a;
	else
		max = b;*/


	/*max = a > b ? a : b;
	printf("%d\n", max);
	return 0;

}*/



//逗号表达式
//int main()
//{
//	//(2, 4 + 5, 6);//逗号表达式
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，时从左向右依次计算的。
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//第六个元素的下标是5，数组下标是从0开始的，数组是由下标来访问的
//	printf("%d\n", arr[5]);//[]就是下标引用操作符，上面那行[]不是，上面那个是定义数组时的一个语法
//	return 0;
//}

//函数调用操作符
//int main()
//{
//	printf("hehe\n");//调用函数的时候，函数名后边的( )就是函数调用操作符
//
//	return 0;
//}

