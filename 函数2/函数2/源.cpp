#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//编写函数不允许创建临时变量,求字符串的长度
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "123456abcdef";
//	/*int len = strlen(arr);*/
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//n的阶乘  5 5*4*3*2*1
//int fac1(int num)
//{
//	if (num <= 1)
//		return num;
//	else
//		return num * fac1(num - 1);
//}
//int fac2(int num)
//{
//	int ret = 1;
//	for (int i = 1; i <= num; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac2(n);
//	printf("%d", ret);
//	return 0;
//}

//求第n个斐波那契数列

int fib(int num)
{
	int a = 1, b = 1, c = 1;
	while (num > 2)
	{
		c = a + b;
		a = b;
		b = c;
		num--;
	}
	return c;
}

//int fib(int num)
//{
//	if (num <= 2)
//		return 1;
//	else
//		return fib(num - 1) + fib(num - 2);
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}