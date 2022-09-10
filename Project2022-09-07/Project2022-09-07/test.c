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
//1.static修饰局部变量
//2.static修饰局部变量
//3.static修饰函数

void test()
{
	int a = 1;
	a++;
	printf("%d", a);
}
int main()
{
	int i = 0;
	while (i < 10)//每次循环掉一个test函数，循环10次
	{
		test();
		i++;
	}
	return 0;
 }

