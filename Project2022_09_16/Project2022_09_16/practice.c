#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//练习3.在一个有序数组中查找具体的某个数字n
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;*///要查找的数字
	//在arr这个有序数组中查找k(7)的值
	//先确定左下标的值，再确定右下标的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小/第一个元素大小=元素个数
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}



//练习4.编写代码，演示多个字符从两端移动，向中间汇聚

//如:
//welcome to Newyork!!!!!!
//########################
//w######################!
//we####################!!
//wec##################!!!
//···
//welcome to Newyork!!!!!!

//#include <string.h>
//#include <windows.h>

//int main()
//{
//	char arr1[] = "welcome to Newyork!!!!!!";
//	char arr2[] = "########################";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


#include <string.h>
#include <windows.h>

//练习5.模拟用户登陆情景，并且只能登陆三次。（只允许输入三次密码，如果密码正确则提示登陆成功，如果输入三次均输入错误，则退出程序
int main()
{
	int i = 0;
	//假设正确的密码字符串"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		//if (password == "123456")错误写法,两个字符串比较，不能使用==  应该使用strcmp
		if(strcmp(password,"123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误,重新输入\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}