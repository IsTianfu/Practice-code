#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

//��ӡ1000�굽��ǧ��֮�������
//д��һ
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)*/
		//�ж�y�ǲ�������
		//1.��4���������ܱ�100����������
		//2.�ܱ�400����Ҳ����
	/*{
		if (y % 4 == 0)
		{
			if (y % 100 > 0)
			{
				printf("%d ", y);
				count++;
			}
		}
		if (y % 400 == 0)
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}*/


//д����
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
		//�ж�y�ǲ�������
		//1.��4���������ܱ�100����������
		//2.�ܱ�400����Ҳ������
//	{
//		if (((y % 4 == 0) && (y % 100 > 0)) || (y % 400 == 0))//    ||����    &&����
//		{
//			printf("%d ", y);
//				count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//дһ�����룺��ӡ100~200֮�������
//������������ֻ�ܱ�1��������������
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		�ж�i�Ƿ�Ϊ����
//		��2~i-1������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;//break��������ѭ����if��䲻��ѭ����䣬for����
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n\ncount = %d\n", count);
//	return 0;
//}


//#include <math.h>//ʹ��sqrt()����Ҫ���õ�ͷ�ļ���sqrt�Ǹ�����
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//			int j = 0;
//			int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)//sqrt�Ǹ��⺯������������ƽ���ģ������i��ƽ��
//�裺�ж�101�ǲ�������
//ԭ����2~100֮�������ȥ����
//2~sqrt(101)֮�������ȥ�Գ�����
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n\ncount = %d\n", count);
//	return 0;
//}



//go to���(go to�����ܻ���Ҵ����ִ��˳��
//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}


//�ػ�����
//ֻҪ����������������һ�����ڹػ���������룺��������ȡ���ػ�
//������ʾ��
//shutdown -s -t 300���������ػ���
//shutdown -a��ȡ���ػ���


//�ػ�(����goto��䣩
//C�����ṩ��һ��������system()- ִ��ϵͳ����
//int main()
//{
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//Ҫʹ��system����Ҫ���õ�ͷ�ļ���<stdlib.h>
//
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ����������:��������ȡ���ػ�\n");
//	scanf("%s", input);//%s���������ܻ��ӡ�ַ�����,����scanf������Ҫ&��ȡ��ַ���ģ�����input�����飬��������������һ����ַ���������ﲻ��Ҫ����&
//	if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��ֱ����==�ģ������ַ��ȾͿ����ã����ַ�����Ӧ��Ҫ�ú���strcmp(),ȫ�ƣ�string compare,ʹ��strcmp�����������õ�ͷ�ļ�<string.h>
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//again�Ǹ���ת����
//	}
//	return 0;
//}

//goto���ֻ����һ��������Χ����ת�����ܿ纯��
//��
//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}



//�ػ�(����goto��䣩
int main()
{
	char input[20] = { 0 };//����������Ϣ
	system("shutdown -s -t 60");//Ҫʹ��system����Ҫ���õ�ͷ�ļ���<stdlib.h>

	while (1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ����������:��������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}