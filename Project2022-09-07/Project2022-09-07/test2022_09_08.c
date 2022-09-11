#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	{
//    int a = 10;//a进大括号自动创建，出大括号自动销毁，所以为自动变量
//	//对于局部变量，前面一般都用auto修饰，而局部变量基本都是自动创建自动销毁的，所以可以省略掉这个auto
//	//auto在新的C语言语法中也有其他用法
//	}
//	return 0;
//}
//int main()
//{
//	register int num = 100;//num被register修饰了，建议num的值存放在寄存器中，但最终是否放入寄存器中由编译器决定
//	//计算机中数据可以存储到寄存器(更小）、高速缓存（几十MB)、内存(8~16G)、硬盘(512G~1T）、网盘（2T)，从后往前造价越高速度越快空间越小
//	//register现在意义不大，因为编译器已经很聪明会自动辨别是否存放入寄存器
//	return 0;
//}

//typedef:类型重定义（重新起名）
//typedef unsigned int u_int;//类型重定义为u_int
//int main()
//{
//	unsigned int num = 100;
//	//上下行等号前面意思一样
//	u_int num2 = 100;
//
//	return 0;
//}


//static:静态的
//1.static修饰全局变量
//2.static修饰局部变量
//3.static修饰函数

//void test()//void空类型，不需要返回值，不需要return
//{
//    int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)//每次循环掉一个test函数，循环10次
//	{
//		test();
//		i++;
//	}
//	return 0;

/*void test()
{
	static int a = 1;*///a（局部变量）进范围自动创建为1，出范围时没有销毁，下次进入范围时a还是上一次留着的（++过的）
	//static 代替auto（一般隐藏）修饰int a，auto表示自动创建和销毁，那static表示只执行一次创建过程，静态局部变量在编译时赋予初值，每次调用函数不在重新赋予初值，函数结束不销毁
	//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
	//栈区：局部变量、函数的参数
	//堆区：动态内存分配
	//静态区：全局变量、static修饰的静态变量（它俩生命周期是一样的，程序不结束，变量不销毁）
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


//static修饰全局变量

//extern声明外部符号（不需要指定值，只需要指定名字类型）
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//		return 0;
//}


//声明函数
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


//define是一个预处理指令
//1.define定义标识符常量
//#define MAX 1000
//
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define定义宏

//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}

//指针就是地址

//int main()
//{
//	int a = 10;//a在内存中要分配空间-4个1字节
//	printf("%p\n", &a);//%p专门用来打印地址的
//	int * pa = &a;//pa是用来存放地址的，在C语言中叫Pa为指针变量
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	pc = &ch;
//	char * pc = &ch;//*是给pc的，说明pc是指针，而前面那个char说明了pc指向变量的类型是char
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//*pa就是通过pa里面的地址找到a（*：解引用操作）
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

//结构体可以让C语言创建新的类型出来

//创建一个学生

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个书的类型

struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	//拿到结构体变量本身：直接点，找到成员变量，然后打印
	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
	printf("1：%s %d %lf\n", s.name, s.age, s.score);//（结构体变量：点左）.（点右：成员变量）

	//拿到结构体指针时，先解引用然后点，找到成员变量，然后打印
	struct Stu * ps = &s;//struct Stu *是结构体指针类型，ps是变量
	printf("2：%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//ps是指针，前面解引用引用一下即*ps，又因为ps指向s，所以*ps即为s
	
	//结构体指针箭头内，先找到它指向对向的然后再找对向的成员变量，然后打印
	printf("3：%s %d %lf\n", ps->name, ps->age, ps->score);//->：结构成员操作符
	//->：使用方式：结构体指针->成员变量名
	return 0;
}
