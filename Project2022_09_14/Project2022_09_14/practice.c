#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//do while()ѭ��
//1~10��ӡ
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//����ѭ����continue����ĳһ��ѭ��
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//��ϰ1.����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//1*2*3*4*5=120
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf(" % d\n", ret);
//	return 0;
//}


//��ϰ2.����1��+2��+3��+������+10!
// ����һ��
// 
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf(" % d\n", sum);
//	return 0;
//}


//��������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼΪ1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	printf(" % d\n", sum);
//	return 0;
//}


//�������Ľ��棺
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum = sum + ret;
//	}
//	printf(" % d\n", sum);
//	return 0;
//}



//��ϰ3.��һ�����������в��Ҿ����ĳ������n��
//��дint binsearch(int x,int v[],int n);���ܣ���V[0]<=V[1]<=V[2]<=...<=V[n-1]�������в���X��



