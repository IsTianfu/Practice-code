#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>


//函数递归
//练习：编写函数不允许创建临时变量，求字符串的长度（模拟实现函数strlen())


//写法一（有临时变量的）

//int my_strlen(char* str)//数组名在传参的时候，传过来的是首元素的地址，且首元素是个字符，而字符的地址需要放到字符指针变量里面去，所以是指针char* str
//{
//	int count = 0;//临时变量
//	while (*str != '\0')//*str就是数组里面的各元素
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "motherfucker";//arr:数组名，数组名相当于首元素地址
//	printf("%d\n", my_strlen(arr));//这个函数计算出长度的时候，由于长度是个整型，所以my_strlen函数的返回类型是整型，所以第一行用int my_strlen 
//	return 0;
//}



//写法二（无临时变量的）

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//str指向字母m的地址,str+1指向第二个字母o的地址
//	else
//		return 0;//如果第一个字符就是\0，则长度就是0
//}
//int main()
//{
//	char arr[] = "motherfucker";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//递归与迭代
//练习.求n的阶乘（不考虑溢出） 

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//循环也可以被称为迭代
//	for (i = 1; i <= n; i++)
//	{
//		 ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);//假设Fac:阶乘
//}
//]]
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//有一些功能：可以使用迭代的方式实现，也可以使用递归



//练习.求第n个斐波那契数列（不考虑溢出）
//1 1 2 3 5 8 13 21 34 55......（斐波那契数列就是前两个数之和等于第三个）



/*int count = 0;*///定义全局变量
//递归可以求解，但是效率太低
//int Fib(int n)
//{
// 
	//统计计算第三个斐波那契数的计算机次数
//	if (n == 3)
//	    count++;
//
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}


//效率高的算法,n太大了就溢出了，结果不对，但是这里不管溢出，所以不用看结果对不对，效率高就行了
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--; 
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
//代码可以用递归写，也可以用非递归写，但是有时候用递归去写的时候可能导致栈溢出，可能效率低，但是总要找到办法看能不能用迭代的方式求解
//照着公式去写代码是非常容易求出来的，但是有可能遇到明显的缺陷，如果遇到了，就必须要用非递归的方式（迭代的方式）写出来了(再难也要写出来）