#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��֧����ѭ�����
//int main()
//{
	//����֧
	/*int age = 20;
	if(age >= 18)
		printf("����\n");*/

		//˫��֧
	//int age = 10;
	//if (age >= 18)
	//printf("����\n");
	//	else
	//	{
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//	}

	//���֧
//	int age = 100;
//
//	if (age < 18)
//		printf("����\n");
//	else if (18 <= age && age < 26)//��18 <= age &&���ɲ�д����ͬ
//		printf("����\n");
//	else if (26 <= age && age < 40)
//		printf("����\n");
//	else if (40 <= age && age < 60)
//		printf("׳��\n");
//	else if (60 <= age && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//}


//1.�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("����\n");
//
//	return 0;
//
//}

//2.���1~100֮�������
// ����1
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

//����2
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

//����3
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i += 2)
	{
			printf("%d ", i);
	}
	return 0;
}