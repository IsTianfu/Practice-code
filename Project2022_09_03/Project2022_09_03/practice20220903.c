#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ʶת���ַ�
//int main()
//{
	//printf("%c\n", '\130');//8���Ƶ�130��ʮ���ƵĶ���
	//���մ�ӡ������X��--ASCII��ֵ��88
	//printf("%c\n", '\101');//A��ASCII��ֵ��65��ʮ���Ƶ�65ת��Ϊ8������101
	//printf("%c\n", '\x30');//48(ASCII)������ǡ�0��
	/*printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;*/
//}

//ע�ͣ����������͸��Ӵ����

//int main()
//{
	//int a = 10;//��б����C++ע�ͷ��
	/*
	int b = 0;
	*/			//б�ܣ��ǣ�C���Ե�ע�ͷ�񣨲�֧��Ƕ��ע�ͣ�
//}

//��ѡ�����
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("����IT��ҵ��>");
//	printf("��Ҫ�ú�ѧϰô(1/0)?>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//    return 0;
//}




//��ѭ�����

//int main()
//{
//	int line = 0;
//	while (line < 30000)//while ѭ����䣬����forѭ������do...whileѭ�����
//	{
//		printf("д����:%d\n", line);//%d�����У�line��ʾ�к�
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}

//��ʶ����



//�Ǻ�����ʽ���
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;//int����һ��sum,Ȼ��Ѻ������Ž�sum����ȥ
//	printf("%d\n", sum);
//
//	return 0;
//}

//������ʽ���
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
////��һ�д�����˼�ǽ�num1��num2���ݸ�Add��Add�����Ǽ������������Ľ����sum����ȥ
//
//	int sum = Add(num1, num2);//�˴�Add�������Ը����Լ���Ը���壬���ֺ͹��ܿ����Լ�����
//	printf("%d\n", sum);
//
//	return 0;
//}


//����(һ����ͬ���͵�Ԫ�صļ��ϣ�

//��10������1-10������
//���������±������ʵġ�
//int main()
//{
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};*///������һ���ռ����ֽ�arr����ʮ��Ԫ�أ�ÿ��Ԫ�ص�������int
	//char ch[5] = { 'a','b','c' };//�������ƽ�ch��ÿ��Ԫ�ص�������char
	//���������汾���ܷ����Ԫ�أ���ֻ��������Ԫ�أ���в���ȫ��ʼ����ʣ�µ������ᱻĬ��Ϊ0
	/*int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	return 0;
}*/


//��ʶ������
//int main()
//{
	//int a = 9 / 2;//��4���̣���1�������ӡ����������
	//float a = 9 / 2.0;//б�����߶�������Ĭ������������ֻ��õ�4���������һ����С������2.0�����ܵõ�����С����4.5
//	int a = 9 % 2;//%-ȡģ���ࣩ
//	printf("%d\n", a);
//
//	return 0;
//}

//���ơ����Ʋ�����
//int main()
//{
//	int a = 2;
//	int b = a << 1;//���Ʋ������ƶ����Ƕ�����λ
//	printf("%d\n", b);
//
//	return 0;
//}
int main()
{
	int a = 2;
	a = a + 5;
	a = 6;//��ֵ
	a += 5��//���ϸ�ֵ
	a = a - 3;
	a -= 3;
	a =a % 3;
	a %= 3;
	printf("%d\n", a);


	return 0;
}