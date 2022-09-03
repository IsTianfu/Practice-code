#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//初识转义字符
//int main()
//{
	//printf("%c\n", '\130');//8进制的130是十进制的多少
	//最终打印出来的X是--ASCII码值是88
	//printf("%c\n", '\101');//A的ASCII码值是65，十进制的65转化为8进制是101
	//printf("%c\n", '\x30');//48(ASCII)代表的是‘0’
	/*printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;*/
//}

//注释：是用来解释复杂代码的

//int main()
//{
	//int a = 10;//两斜杠是C++注释风格
	/*
	int b = 0;
	*/			//斜杠＋星，C语言的注释风格（不支持嵌套注释）
//}

//简单选择语句
//int main()
//{
//	int input = 0;//输入的值
//	printf("加入IT行业：>");
//	printf("那要好好学习么(1/0)?>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//    return 0;
//}




//简单循环语句

//int main()
//{
//	int line = 0;
//	while (line < 30000)//while 循环语句，还有for循环语句和do...while循环语句
//	{
//		printf("写代码:%d\n", line);//%d代表行，line表示行号
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}

//初识函数



//非函数方式相加
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;//int定义一个sum,然后把后面结果放进sum里面去
//	printf("%d\n", sum);
//
//	return 0;
//}

//函数方式相加
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
////下一行代码意思是将num1和num2传递给Add，Add将它们加起来返回来的结果放sum里面去
//
//	int sum = Add(num1, num2);//此处Add函数可以根据自己意愿定义，名字和功能可以自己决定
//	printf("%d\n", sum);
//
//	return 0;
//}


//数组(一种相同类型的元素的集合）

//将10个整型1-10存起来
//数组是用下标来访问的。
//int main()
//{
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};*///创造了一个空间名字叫arr，有十个元素，每个元素的类型是int
	//char ch[5] = { 'a','b','c' };//数组名称叫ch，每个元素的类型是char
	//大括号里面本来能放五个元素，但只放了三个元素，这叫不完全初始化，剩下的两个会被默认为0
	/*int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	return 0;
}*/


//初识操作符
//int main()
//{
	//int a = 9 / 2;//得4（商）余1，结果打印出来得是商
	//float a = 9 / 2.0;//斜杠两边都是正数默认整数除法，只会得到4，但是如果一边有小数比如2.0，就能得到含有小数得4.5
//	int a = 9 % 2;//%-取模（余）
//	printf("%d\n", a);
//
//	return 0;
//}

//左移、右移操作符
//int main()
//{
//	int a = 2;
//	int b = a << 1;//左移操作符移动得是二进制位
//	printf("%d\n", b);
//
//	return 0;
//}
int main()
{
	int a = 2;
	a = a + 5;
	a = 6;//赋值
	a += 5；//复合赋值
	a = a - 3;
	a -= 3;
	a =a % 3;
	a %= 3;
	printf("%d\n", a);


	return 0;
}