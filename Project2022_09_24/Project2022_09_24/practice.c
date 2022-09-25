#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>//使用函数sqrt()所需要引用的源文件



//函数的调用

//传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//传址调用：传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//这种传参方式可以让函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。



//练习1.写一个函数可以判断一个数是不是素数（100~200）
//实现is_prime函数
//int is_prime(int n)
//{
	//2->n-1之间的数字
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		判断i是否为素数
//		if (is_prime(i) == 1)//如果i是素数则返回1，打印，若不是素数则返回0，什么都没
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n\ncount = %d\n", count);
//	return 0;
//}




//练习2.判断一年是否为闰年
//实现is_leap_year()函数
//一个函数如果不写返回类型，默认返回int类型
//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 > 0 || n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n\ncount = %d\n", count);
//	return 0;
//}



//练习3.写一个函数，实现一个整形有序数组的二分查找
//实现binary_search
//int binary_search(int arr[], int key, int sz)//形参和实参的名字可以相同可以不同
//{
//	int left = 0;
//	int right = sz - 1;//sz代表元素个数
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组总大小除以第一个字节大小
	//找到了就返回找到的位置的下标
	//找不到返回-1
	//数组arr传参，实际传递的不是数组的本身
	//仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key, sz);//二分查找的英文翻译,ret下标，即binary_search返回的值放入ret里面去
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("找到了，下标是:%d\n", ret);
//	return 0;
//}


//写一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int*p)
//{
//	(*p)++;//*p就是外面的num
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}




//函数的嵌套调用和链式访问

//函数和函数之间可以有机的组合的（每一个函数都应该在大括号的外头独立存在）
//函数不能嵌套定义的，但是可以嵌套调用

//void test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}


//链式访问：把一个函数的返回值作为另一个函数的参数
//假设求一字符串的长度
//写法1
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//写法2(链式访问）
//int main()
//{
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//写法1
//int main()
//{
//
//	char arr1[20] = { 0 };
//	char arr2[20] = "mother fucker";
//	strcpy(arr1, arr2);//将arr2的内容拷贝进arr1
//	printf("%s\n", arr1);
//	return 0;
//}

//写法2（链式访问）
//int main()
//{
//
//	char arr1[20] = { 0 };
//	char arr2[20] = "mother fucker";
//	printf("%s\n", strcpy(arr1, arr2));//strcpy的返回值做了printf的参数
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//printf()的功能是打印字符，而它的返回值是字符的个数，两者并不一样
//printf返回值类型描述：这个函数返回的是打印在屏幕上的字符的个数


int main()
{
	priintf("呵呵\n");
	main();
	return 0;
}