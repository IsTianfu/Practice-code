#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>





//��ϰ1.�Ѻ������������������ݷ��ظ��������ķ���
//����1.�β�������

//void test(int arr[])//����arr����
//{
//	arr[0] = 1;
//	arr[1] = 2;
	//����ȥ�����������������ǿ��Եõ�������ֵ�ģ�������ֵ����test���ģ�
//}

//int main()
//{
//	int arr[10] = { 0 };//����һ��test����
//	test(arr);//��arr���鴫��ȥ
//	return 0;
//}
//���鴫�εı����Ǵ����������Ԫ�ص�ַ


//����2.�β�������ָ��
//void test(int* p1, int* p2)//����ָ���������ַ��������p1ָ��a,p2ָ��b
//{
//	*p1 = 1;
//	*p2 = 2;//����1��2���ܴ���ȥ������
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);//ȡ��ַa��b����ȥ
//	return 0;
//}
//
//
////����3.������ȫ�ֱ������������ã�
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



//��ϰ2.��д����ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//������9�����9*9�˷��ھ�������12�����12*12�˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	//��
//	for (i = 1; i <= n; i++)
//	{
//		//��
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
//	//����
//	print_table(n);//print_table��ӡ��
//	//�����������Ƿǳ��ؼ��ģ�������������ֺ����Ĺ���
//	return 0;
//}



//��ϰ3.��дһ������reverse_string(char*string)(�ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��(�����������ݷ����仯��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//�磺    char arr[] = "abcdef"   �����    fedcba

//�ǵݹ鷽ʽ��
// int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//*str����strָ����Ǹ��ַ�
//	{
//		count++;
//		str++;
//	}
//	return count;//count����ŵľ�������ַ�������
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	
//	while(left<right)
//	{
//		char tmp = str[left];//tmp��ʱ����
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);//fedcba
//	return 0;
//}


//�ݹ鷽ʽ��
// int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//*str����strָ����Ǹ��ַ�
//	{
//		count++;
//		str++;
//	}
//	return count;//count����ŵľ�������ַ�������
//}
//
//void reverse_string(char* str)//str:ָ����ǰ���Ԫ��λ��
//{
//	char tmp = *str;//������ʱ������ͷһ��Ԫ�س��������(*str:ͷԪ���±�  tmp:��ʱ������
//	int len = my_strlen(str);//len:�ַ����ܳ���
//	*str = *(str + len - 1);//�����һ����\0Ԫ�ػ���ͷԪ��λ�ã� *��str+len-1):���һ��Ԫ���±꣩
//	*(str + len - 1) = '\0';//������\0Ԫ��λ�ô�����һ��\0��len-1:fԭ�����±꣩
//	//�ж�����
//	if (my_strlen(str + 1) >= 2)//my_strlen(str+1):��ȥͷԪ�أ�����Ԫ�صĳ���
//	{
//		reverse_string(str + 1);//��reverse_string�����ȥǰ����Ԫ�ص��м�Ԫ��(ԭ�������һ����\0Ԫ���Ѿ���ǰ�汻\0�滻���ˣ�����������Գ�ȥ��
//	}
//	*(str + len - 1) = tmp;//��ǰ�������ʱ�������洢���ͷԪ�ط������һ��ԭ����\0Ԫ�ش�(ǰ����\0����ˣ���������ԭ����ͷԪ�ذ����\0��������
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);//fedcba
//	return 0;
//}


//��ϰ4.����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//��дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//�磺����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729   �����19

//int DigitSum(int n)//���庯��
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


//��ϰ5.��дһ������ʵ��n��k�η����ݹ�ʵ�֣�

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
	double ret = Pow(n, k);//Сдp��pow�ǿ⺯������ʾһ������k�η�
	printf("%f\n", ret);
	return 0;
}
