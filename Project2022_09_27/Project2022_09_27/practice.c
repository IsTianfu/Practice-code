#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>


//�����ݹ�
//��ϰ����д��������������ʱ���������ַ����ĳ��ȣ�ģ��ʵ�ֺ���strlen())


//д��һ������ʱ�����ģ�

//int my_strlen(char* str)//�������ڴ��ε�ʱ�򣬴�����������Ԫ�صĵ�ַ������Ԫ���Ǹ��ַ������ַ��ĵ�ַ��Ҫ�ŵ��ַ�ָ���������ȥ��������ָ��char* str
//{
//	int count = 0;//��ʱ����
//	while (*str != '\0')//*str������������ĸ�Ԫ��
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "motherfucker";//arr:���������������൱����Ԫ�ص�ַ
//	printf("%d\n", my_strlen(arr));//���������������ȵ�ʱ�����ڳ����Ǹ����ͣ�����my_strlen�����ķ������������ͣ����Ե�һ����int my_strlen 
//	return 0;
//}



//д����������ʱ�����ģ�

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//strָ����ĸm�ĵ�ַ,str+1ָ��ڶ�����ĸo�ĵ�ַ
//	else
//		return 0;//�����һ���ַ�����\0���򳤶Ⱦ���0
//}
//int main()
//{
//	char arr[] = "motherfucker";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//�ݹ������
//��ϰ.��n�Ľ׳ˣ������������ 

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//ѭ��Ҳ���Ա���Ϊ����
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
//		return n * Fac(n - 1);//����Fac:�׳�
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

//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�



//��ϰ.���n��쳲��������У������������
//1 1 2 3 5 8 13 21 34 55......��쳲��������о���ǰ������֮�͵��ڵ�������



/*int count = 0;*///����ȫ�ֱ���
//�ݹ������⣬����Ч��̫��
//int Fib(int n)
//{
// 
	//ͳ�Ƽ��������쳲��������ļ��������
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


//Ч�ʸߵ��㷨,n̫���˾�����ˣ�������ԣ��������ﲻ����������Բ��ÿ�����Բ��ԣ�Ч�ʸ߾�����
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
//��������õݹ�д��Ҳ�����÷ǵݹ�д��������ʱ���õݹ�ȥд��ʱ����ܵ���ջ���������Ч�ʵͣ�������Ҫ�ҵ��취���ܲ����õ����ķ�ʽ���
//���Ź�ʽȥд�����Ƿǳ�����������ģ������п����������Ե�ȱ�ݣ���������ˣ��ͱ���Ҫ�÷ǵݹ�ķ�ʽ�������ķ�ʽ��д������(����ҲҪд������