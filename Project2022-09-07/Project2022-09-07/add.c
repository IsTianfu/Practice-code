#define _CRT_SECURE_NO_WARNINGS 1

//全局变量(在整个工程里面都能用）
// static int g_val = 2022;
 //static修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部可以使用，其他源文件不能使用
 //全局变量，在其他源文件内部可以使用，是因为全局变量具有外部链接属性，但是被static修饰后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了

//static修饰函数
static int Add(int x, int y)//Add叫加法函数
{
	//用static修饰函数时，情况与上述修饰全局变量情况相同
	return x + y;
}