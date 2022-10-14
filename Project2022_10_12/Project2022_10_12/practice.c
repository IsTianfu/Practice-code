#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>





//练习1.把函数处理结果的两个数据返回给主函数的方法
//方法1.形参用数组

//void test(int arr[])//接受arr数组
//{
//	arr[0] = 1;
//	arr[1] = 2;
	//代回去主函数（在主函数是可以得到这两个值的，这两个值就是test给的）
//}

//int main()
//{
//	int arr[10] = { 0 };//调用一个test函数
//	test(arr);//把arr数组传过去
//	return 0;
//}
//数组传参的本质是传递数组的首元素地址


//方法2.形参用两个指针
//void test(int* p1, int* p2)//两个指针变量，地址传过来后p1指向a,p2指向b
//{
//	*p1 = 1;
//	*p2 = 2;//这样1和2就能代回去主函数
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);//取地址a、b传过去
//	return 0;
//}
//
//
////方法3.用两个全局变量（不建议用）
//
//int a = 0;
//int b = 0;
//
//void test()
//{
//	a = 1;
//	b = 2;
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//练习2.编写程序实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如输入9，输出9*9乘法口诀表，输入12，输出12*12乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)
//	{
//		//列
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//函数
//	print_table(n);//print_table打印表
//	//函数的起名是非常关键的，名字最好能体现函数的功能
//	return 0;
//}



//练习3.编写一个函数reverse_string(char*string)(递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。(是数组中内容发生变化）
//要求：不能使用C函数库中的字符串操作函数。
//如：    char arr[] = "abcdef"   逆序后    fedcba

//非递归方式：
// int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//*str就是str指向的那个字符
//	{
//		count++;
//		str++;
//	}
//	return count;//count里面放的就是这个字符串长度
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	
//	while(left<right)
//	{
//		char tmp = str[left];//tmp临时变量
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//	return 0;
//}


//递归方式：
// int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//*str就是str指向的那个字符
//	{
//		count++;
//		str++;
//	}
//	return count;//count里面放的就是这个字符串长度
//}
//
//void reverse_string(char* str)//str:指向最前面的元素位置
//{
//	char tmp = *str;//设置临时变量把头一个元素抽出来储存(*str:头元素下标  tmp:临时变量）
//	int len = my_strlen(str);//len:字符串总长度
//	*str = *(str + len - 1);//把最后一个非\0元素换到头元素位置（ *（str+len-1):最后一个元素下标）
//	*(str + len - 1) = '\0';//在最后非\0元素位置处放入一个\0（len-1:f原来的下标）
//	//判断条件
//	if (my_strlen(str + 1) >= 2)//my_strlen(str+1):除去头元素，后面元素的长度
//	{
//		reverse_string(str + 1);//用reverse_string逆序除去前后两元素的中间元素(原本的最后一个非\0元素已经在前面被\0替换掉了，所以这里可以除去）
//	}
//	*(str + len - 1) = tmp;//将前面放入临时变量里面储存的头元素放入最后一个原本非\0元素处(前面用\0替代了，这里再用原本的头元素把这个\0换下来）
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//	return 0;
//}


//练习4.计算一个数的每位之和（递归实现）
//编写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//如：调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入：1729   输出：19

//int DigitSum(int n)//定义函数
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + (n % 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//练习5.编写一个函数实现n的k次方（递归实现）

double Pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else
		return 1.0 / (Pow(n, -k));
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);//小写p的pow是库函数，表示一个数的k次方
	printf("%f\n", ret);
	return 0;
}
