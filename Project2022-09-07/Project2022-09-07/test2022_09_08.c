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
//1.static����ȫ�ֱ���
//2.static���ξֲ�����
//3.static���κ���

//void test()//void�����ͣ�����Ҫ����ֵ������Ҫreturn
//{
//    int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)//ÿ��ѭ����һ��test������ѭ��10��
//	{
//		test();
//		i++;
//	}
//	return 0;

/*void test()
{
	static int a = 1;*///a���ֲ�����������Χ�Զ�����Ϊ1������Χʱû�����٣��´ν��뷶Χʱa������һ�����ŵģ�++���ģ�
	//static ����auto��һ�����أ�����int a��auto��ʾ�Զ����������٣���static��ʾִֻ��һ�δ������̣���̬�ֲ������ڱ���ʱ�����ֵ��ÿ�ε��ú����������¸����ֵ����������������
	//static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
	//ջ�����ֲ������������Ĳ���
	//��������̬�ڴ����
	//��̬����ȫ�ֱ�����static���εľ�̬��������������������һ���ģ����򲻽��������������٣�
	/*a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}*/


//static����ȫ�ֱ���

//extern�����ⲿ���ţ�����Ҫָ��ֵ��ֻ��Ҫָ���������ͣ�
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//		return 0;
//}


//��������
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//define��һ��Ԥ����ָ��
//1.define�����ʶ������
//#define MAX 1000
//
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define�����

//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}

//ָ����ǵ�ַ

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�-4��1�ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ��
//	int * pa = &a;//pa��������ŵ�ַ�ģ���C�����н�PaΪָ�����
//	//*˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//
//	char ch = 'w';
//	pc = &ch;
//	char * pc = &ch;//*�Ǹ�pc�ģ�˵��pc��ָ�룬��ǰ���Ǹ�char˵����pcָ�������������char
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//*pa����ͨ��pa����ĵ�ַ�ҵ�a��*�������ò�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//	return 0;
//}

//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ���������

struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	//�õ��ṹ���������ֱ�ӵ㣬�ҵ���Ա������Ȼ���ӡ
	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1��%s %d %lf\n", s.name, s.age, s.score);//���ṹ�����������.�����ң���Ա������

	//�õ��ṹ��ָ��ʱ���Ƚ�����Ȼ��㣬�ҵ���Ա������Ȼ���ӡ
	struct Stu * ps = &s;//struct Stu *�ǽṹ��ָ�����ͣ�ps�Ǳ���
	printf("2��%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//ps��ָ�룬ǰ�����������һ�¼�*ps������Ϊpsָ��s������*ps��Ϊs
	
	//�ṹ��ָ���ͷ�ڣ����ҵ���ָ������Ȼ�����Ҷ���ĳ�Ա������Ȼ���ӡ
	printf("3��%s %d %lf\n", ps->name, ps->age, ps->score);//->���ṹ��Ա������
	//->��ʹ�÷�ʽ���ṹ��ָ��->��Ա������
	return 0;
}
