#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <stdio.h>






int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 300");
	printf("请注意，你的电脑在五分钟内关机，如果输入:我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
	    system("shutdown -a");
	}

	printf("哈哈哈哈哈哈哈哈哈哈，没用的，不要挣扎了\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}

	printf("快点承认你是猪，然后仰天大唱  怎么了~\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}

	printf("快点承认你是猪，就要关机来不及啦哈哈哈哈哈哈\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	again:
	printf("嘀嗒  嘀嗒  嘀嗒  嘀嗒  嘀嗒  嘀嗒  嘀嗒\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}