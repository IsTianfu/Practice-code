#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.С�ɻ�
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



//2.�ж���Ŵ��ţ����ڵ���140Ϊ��ţ�����Ϊ��B(�������룡��!)�������,����ж�

int main()
{
    int a = 0;
    while (scanf("%d", &a) == 1)//scanf�������ص��ǣ�ʵ�ʶ��������ݵĸ�������������ĸ��������ڴ���������ݸ���Ϊ1�����Խ���whileѭ��
        //scanf������ȡʧ�ܵ�ʱ�򣬷��ص���EOF��EOF��end of file �ļ�������־����EOF�ı����ǣ�-1��
    if (a >= 140)
    {
        printf("Genius\n");
    }
    else
    {
        printf("��B\n");
    }
    return 0;
}


//3.�����ֻ���Ҫ���ߴ�ң�����Ļ�ϴ�ӡI lost my cellphone!

//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}


//4.�������ʽ��(-8+22)��a-10+c��2�������У�a = 40��c = 212

//int main()
//{
//    int a = 40;
//    int c = 212;
//    int Fou = (-8 + 22) * a - 10 + c / 2;
//    printf("%d", Fou);
//    return 0;
//}