#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>//ʹ�ú���sqrt()����Ҫ���õ�Դ�ļ�



//�����ĵ���

//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//��ַ���ã���ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//���ִ��η�ʽ�����ú�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����



//��ϰ1.дһ�����������ж�һ�����ǲ���������100~200��
//ʵ��is_prime����
//int is_prime(int n)
//{
	//2->n-1֮�������
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
//		�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)//���i�������򷵻�1����ӡ�������������򷵻�0��ʲô��û
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n\ncount = %d\n", count);
//	return 0;
//}




//��ϰ2.�ж�һ���Ƿ�Ϊ����
//ʵ��is_leap_year()����
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
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



//��ϰ3.дһ��������ʵ��һ��������������Ķ��ֲ���
//ʵ��binary_search
//int binary_search(int arr[], int key, int sz)//�βκ�ʵ�ε����ֿ�����ͬ���Բ�ͬ
//{
//	int left = 0;
//	int right = sz - 1;//sz����Ԫ�ظ���
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����ܴ�С���Ե�һ���ֽڴ�С
	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//�Ҳ�������-1
	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
	//��������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key, sz);//���ֲ��ҵ�Ӣ�ķ���,ret�±꣬��binary_search���ص�ֵ����ret����ȥ
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	return 0;
//}


//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Add(int*p)
//{
//	(*p)++;//*p���������num
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




//������Ƕ�׵��ú���ʽ����

//�����ͺ���֮������л�����ϵģ�ÿһ��������Ӧ���ڴ����ŵ���ͷ�������ڣ�
//��������Ƕ�׶���ģ����ǿ���Ƕ�׵���

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


//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//������һ�ַ����ĳ���
//д��1
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//д��2(��ʽ���ʣ�
//int main()
//{
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//д��1
//int main()
//{
//
//	char arr1[20] = { 0 };
//	char arr2[20] = "mother fucker";
//	strcpy(arr1, arr2);//��arr2�����ݿ�����arr1
//	printf("%s\n", arr1);
//	return 0;
//}

//д��2����ʽ���ʣ�
//int main()
//{
//
//	char arr1[20] = { 0 };
//	char arr2[20] = "mother fucker";
//	printf("%s\n", strcpy(arr1, arr2));//strcpy�ķ���ֵ����printf�Ĳ���
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//printf()�Ĺ����Ǵ�ӡ�ַ��������ķ���ֵ���ַ��ĸ��������߲���һ��
//printf����ֵ��������������������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���


int main()
{
	priintf("�Ǻ�\n");
	main();
	return 0;
}