#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	{
//    int a = 10;//a���������Զ����������������Զ����٣�����Ϊ�Զ�����
//	//���ھֲ�������ǰ��һ�㶼��auto���Σ����ֲ��������������Զ������Զ����ٵģ����Կ���ʡ�Ե����auto
//	//auto���µ�C�����﷨��Ҳ�������÷�
//	}
//	return 0;
//}
//int main()
//{
//	register int num = 100;//num��register�����ˣ�����num��ֵ����ڼĴ����У��������Ƿ����Ĵ������ɱ���������
//	//����������ݿ��Դ洢���Ĵ���(��С�������ٻ��棨��ʮMB)���ڴ�(8~16G)��Ӳ��(512G~1T�������̣�2T)���Ӻ���ǰ���Խ���ٶ�Խ��ռ�ԽС
//	//register�������岻����Ϊ�������Ѿ��ܴ������Զ�����Ƿ�����Ĵ���
//	return 0;
//}

//typedef:�����ض��壨����������
//typedef unsigned int u_int;//�����ض���Ϊu_int
//int main()
//{
//	unsigned int num = 100;
//	//�����еȺ�ǰ����˼һ��
//	u_int num2 = 100;
//
//	return 0;
//}


//static:��̬��
//1.static���ξֲ�����
//2.static���ξֲ�����
//3.static���κ���

void test()
{
	int a = 1;
	a++;
	printf("%d", a);
}
int main()
{
	int i = 0;
	while (i < 10)//ÿ��ѭ����һ��test������ѭ��10��
	{
		test();
		i++;
	}
	return 0;
 }

