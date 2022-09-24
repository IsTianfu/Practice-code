#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//下面使用strcpy所需要引用的头文件
#include <windows.h>



//函数
//将数组2的内容换到数组1内
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello motherfucker";
//	strcpy(arr1, arr2);//拷贝功能，arr1是目的地，arr2是源头，利用strcpy这个函数将源字符串拷贝进目标空间里面去
//	printf("%s", arr1);//打印arr1这个字符 %s  -以字符串的格式打印
//	return 0;
//}


//将数组内前五个字母设置成x
//int main()
//{
//	char arr[] = "hello motherfucker";
//	memset(arr, 'x',5);//memset-内存设置
//	printf("%s\n", arr);
//	return 0;
//}


//写一个函数可以找出两个整数中的最大值

//自定义get_max函数
/*int get_max(int x, int y)*///因为传过来的a,b是整型，所有要拿int类型的x,y来接受，因为z是整型即，这个函数完成之后是返回的是一个整型，所以要在get_max前加一个int
//大括号内的叫做函数体，函数体里面就做一个事情就是把x、y里的较大值求出
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回z，即返回较大值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//get_max函数的调用
//	int max = get_max(a, b);//get_max在a和b里找出最大值，就把这个值反过来放入max里面去
//	printf("max = %d\n", max);
//
//	return 0;
//}




//写一个函数可以交换两个整型变量的内容。

//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
// swap1在被调用的时候，实参传给形参。其实形参是实参的一份临时拷贝
// 改变形参，不能改变实参
//void Swap1(int x, int y)//(这里只需要将x、y互换，并不像上面要输出最大值，所以用void)，函数定义
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;//当创建a、b这两个变量之后，它们在内存里面开辟了两块空间，分别是a空间和b空间，每块空间都有它们的地址，所以这么写代码是行不通的  
//	int b = 20;//后续定义的x、y都是新的空间新的地址，完全与a、b无关，所以上面x、y交换来交换去跟a、b半毛钱关系没有，所以下面打印出来a、b内的值是没有变化的
//	//写一个函数，交换两个整型变量的值
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap1(a, b);//把a和b交换一下(函数调用）
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}



//指针回顾
//int main()
//{
//	int a = 10;//创建一个4字节的空间
//	int* pa = &a;//pa就是一个指针变量,用*pa把a的地址存起来
//	*pa = 20;//通过pa里面存的地址找到它对应的对象，即*pa就是a
//	printf("%d\n", a);
//	return 0;
//}




void Swap2(int *pa, int *pb)//*pa能找到a,*pb能找到b
//函数定义
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
	*pa;//访问下面的a
	*pb;//访问下面的b
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前:a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("交换后:a=%d b=%d\n", a, b);

	return 0;
}

swap1//传值调用
swap2//传址调用