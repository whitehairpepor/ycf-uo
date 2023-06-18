#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//错误操作符的使用
//int main()
//{
//	int* a = 0;
//	char* c = 0;
//
//	printf("%d\n",sizeof(a));
//	printf("%d\n", sizeof(c));
//
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//
//	}
//	
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;
//		printf("%d \n", *p);
//	}
//	return 0;
//}
//#include<stdlib.h>
//int count_bit_(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a >> i & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_(a);
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdlib.h>
//int count_bit_(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a=a& (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_(a);
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdlib.h>
//int count_bit_nosame(int a, int b)
//{
//	int c = 0;
//	int count = 0;
//	c = a ^ b;
//    while(c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	count=count_bit_nosame(a, b);
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdlib.h>
//void print(int a)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//
//	}
//	printf("\n");
//	
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}