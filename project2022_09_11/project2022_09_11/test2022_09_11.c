#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//分支语句和循环语句
//int main()
//{
	//单分支
	/*int age = 20;
	if(age >= 18)
		printf("成年\n");*/

		//双分支
	//int age = 10;
	//if (age >= 18)
	//printf("成年\n");
	//	else
	//	{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//	}

	//多分支
//	int age = 100;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (18 <= age && age < 26)//（18 <= age &&）可不写，下同
//		printf("青年\n");
//	else if (26 <= age && age < 40)
//		printf("中年\n");
//	else if (40 <= age && age < 60)
//		printf("壮年\n");
//	else if (60 <= age && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}


//1.判断一个数是否为基数
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数\n");
//
//	return 0;
//
//}

//2.输出1~100之间的奇数
// 方法1
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//方法2
//int main()
//{
//	int num = 0;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("%d ", num);
//		num++;
//	}
//	return 0;
//}

//方法3
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i += 2)
	{
			printf("%d ", i);
	}
	return 0;
}