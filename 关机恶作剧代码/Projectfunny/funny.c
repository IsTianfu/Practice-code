#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <stdio.h>






int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 300");
	printf("��ע�⣬��ĵ�����������ڹػ����������:��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
	    system("shutdown -a");
	}

	printf("����������������������û�õģ���Ҫ������\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}

	printf("������������Ȼ�������  ��ô��~\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}

	printf("��������������Ҫ�ػ���������������������\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	again:
	printf("���  ���  ���  ���  ���  ���  ���\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}