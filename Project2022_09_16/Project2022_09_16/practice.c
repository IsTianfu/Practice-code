#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//��ϰ3.��һ�����������в��Ҿ����ĳ������n
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;*///Ҫ���ҵ�����
	//��arr������������в���k(7)��ֵ
	//��ȷ�����±��ֵ����ȷ�����±��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ܴ�С/��һ��Ԫ�ش�С=Ԫ�ظ���
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
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}



//��ϰ4.��д���룬��ʾ����ַ��������ƶ������м���

//��:
//welcome to Newyork!!!!!!
//########################
//w######################!
//we####################!!
//wec##################!!!
//������
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
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


#include <string.h>
#include <windows.h>

//��ϰ5.ģ���û���½�龰������ֻ�ܵ�½���Ρ���ֻ���������������룬���������ȷ����ʾ��½�ɹ�������������ξ�����������˳�����
int main()
{
	int i = 0;
	//������ȷ�������ַ���"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		//if (password == "123456")����д��,�����ַ����Ƚϣ�����ʹ��==  Ӧ��ʹ��strcmp
		if(strcmp(password,"123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������,��������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}