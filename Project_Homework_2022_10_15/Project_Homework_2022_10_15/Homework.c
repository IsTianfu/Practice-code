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



//2.判断天才蠢才，大于等于140为天才，其他为笨B

//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 140)
//    {
//        printf("Genius\n");
//    }
//    else
//    {
//        printf("笨B\n");
//    }
//    return 0;
//}


//3.丢了手机，要告诉大家，在屏幕上打印I lost my cellphone!

//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}


//4.请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212

int main()
{
    int a = 40;
    int c = 212;
    int Fou = (-8 + 22) * a - 10 + c / 2;
    printf("%d", Fou);
    return 0;
}