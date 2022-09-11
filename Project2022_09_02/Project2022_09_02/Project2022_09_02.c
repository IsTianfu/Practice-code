#include <stdio.h>
//
//int g_val = 2022;
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//}
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//int main()
//{
//	{
//		int a = 10;
//		printf("% d\n", a);
//
//	}
//
//	return 0;

//}
//#define MAX 10000
//int main()
//{
	//常量
	//1.字面常量

	//int main()
	//{
	//	3.14;
	//
	//	return 0;
	//}

	//2.const修饰的常变量
	//int num = 10;//num本身是变量，不想变了就在前加个const
	//const int num = 10;(会报错，被const修饰之后这个东西不能改，这里指num不能变,此时的num就是常变量，具有常属性，即不能被改变的属性)
	//num = 20;
	//printf("num = %d\n", num);//结果20，因为可变

	//return 0;
//}
//3.#define 定义的标识符常量
//	MAX = 20000；（写法错误，MAX不能变）
//int n = MAX;//MAX 就是define的标识常量
//printf("n = %d\n", n);
//return 0;
//}

//性别
//enum Sex
//{
//	//这种没枚举类型的变量的未来可能取值
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//4.枚举常量（可一一列举的常量）
//
//	enum Sex s = MALE;//(创造枚举变量s，取值只能是三个中的一个）
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//#include <string.h>
////字符串就是一串字符- 用双引号括起来的就是一串字符
//int main()
//{
//	//字符数组-数组是一组相同类型的元素
//	//"hello";//字符串里面放的都是字符，用char类型创建了个字符数组叫arr
//	//char arr[] = "hello";//方块内不写有几个元素时，它就会根据后面字符串内容来初始化它
//	//"hello"看起来五个字符，实际六个字符，因为字符串在结尾处隐藏起来了个\0的字符，但计算长度时不计入内
//	// \0是字符串的结束标志
//	char arr1[] = "abc";//计算它的长度是3
//	char arr2[] = {'a', 'b', 'c'};//单字符末尾没有\0结束,会出现未知东西，但是加上\0最后效果跟上一行相同
//	//计算它的长度则是随机值，因为不知道后面究竟跟着什么
//	//打印字符串
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	//求一下字符串的长度
//	int len = strlen("abc");//string length
//	printf("%d\n", len);//长度为3
//
//	return 0;
//}

//转义字符：转变了它原来的意思
int main()
{
	printf("ab\ncd");//不再是斜杠和n，\n变成了一个转义字符



	return 0;
}