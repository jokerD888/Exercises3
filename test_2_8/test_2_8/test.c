#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//计算求和，如2+22+222+2222...
//int main(void)
//{
//	int a = 0;
//	int n = 0;
//	int ret = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d%d", &a, &n);
//	
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//自幂数
//1.计算i的位数 2.计算i的每一位的n次方 3.比较i==sum
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//
//		//计算判断位数
//		int n = 1;
//		int temp = i;
//		int sum = 0;
//		while (temp /= 10)
//		{
//			n++;
//
//		}
//		//2.计算和
//		temp = i;
//		while (temp)
//		{
//			sum+=pow(temp % 10, n);
//			temp /= 10;
//		}
//		//比较
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//打印菱形
//int main(void)
//{
//	int i,j;
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 6-i; j++)
//		{
//			printf(" ");
//		}
//		
//		for (j = 0; j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i=0; i<6; i++)
//	{
//		for (j = 0; j < 1 + i; j++)
//		{
//			printf(" ");
//		}
//		 
//		for (j = 0; j < 11 - 2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main(void)
{
	int i = 0;
	int line = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - i - 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}