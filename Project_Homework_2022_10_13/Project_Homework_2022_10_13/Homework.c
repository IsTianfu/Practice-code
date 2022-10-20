#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.小飞机
// 
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//   
//    return 0;
//}



//2.判断天才蠢才，大于等于140为天才，其他为笨B(多组输入！！!)多次输入,多次判断

int main()
{
    int a = 0;
    while (scanf("%d", &a) == 1)//scanf函数返回的是：实际读到的数据的个数（键盘输入的个数），在此输入的数据个数为1，所以进入while循环
        //scanf函数读取失败的时候，返回的是EOF（EOF：end of file 文件结束标志），EOF的本质是（-1）
    if (a >= 140)
    {
        printf("Genius\n");
    }
    else
    {
        printf("笨B\n");
    }
    return 0;
}


//3.丢了手机，要告诉大家，在屏幕上打印I lost my cellphone!

//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}


//4.请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212

//int main()
//{
//    int a = 40;
//    int c = 212;
//    int Fou = (-8 + 22) * a - 10 + c / 2;
//    printf("%d", Fou);
//    return 0;
//}