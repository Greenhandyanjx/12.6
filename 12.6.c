#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//isupper,islower,toupper,tolower.操作数都是一个字母
int main()
{
	char str[10000] = "";
	char arr[1000];
	strcpy(arr, str);
	int a = 0, b = 0;
	//if (strchr(str, '.'))
	//{
	//	for (; arr; strtok(arr, "."))
	//	{
	//		char* sta = arr;
	//		int len = strlen(arr);
	//		char* end = arr + len;
	//		while (*(sta++) = *(end--))
	//		{
	//			if (sta == end || sta > end)
	//				break;
	//		}
	//		
	//	}
	//}
	return 0;
}
	//char str1[3][10] = { "one","two","three" };
	//char str2[3][10] = { "a","both","third" };
	//char arr[100][100] = {'\0'};
	//int a = 0,b=0,c=0,d=0,flag=0;
	//do {
	//	scanf("%s", arr[a++]);
	//} while (getchar() != '\n');
	//for (b = 0; b < a; b++)
	//{
	//	for (c = 0; c < 3; c++)
	//	{
	//		if (strcmp((str1[c]), arr[b]) == 0)
	//		{
	//			d += c+1;
	//			break;
	//		}
	//		else if (strcmp((str2[c]), arr[b]) == 0)
	//		{
	//			d += c+1;
	//			break;
	//		}
	//	}
	//	if (d != 0)
	//	{
	//		printf("%d", d);
	//		flag++;
	//	}
	//	if (!flag)
	//		printf("0");
	//	d = 0;
	//}