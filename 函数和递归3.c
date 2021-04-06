#define _CRT_SECURE_NO_WARNINGS
//递归和迭代

//练习：求n的阶乘（不考虑溢出）
#include<stdio.h>
#include<string.h>
int Fac1(int n)    //循环
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n;i++)
	{
		ret *= i;
	}
	return ret;
}

int Fac2(int n)    //递归
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}

int main()
{
	//求n阶的阶乘
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);//循环的方式
	printf("%d\n", ret);
	return 0;
}


//练习：求第n个斐波那契数（不考虑溢出）
int count = 0;//需要运算的次数
int Fib(int n)
{
	if (n == 3)  //测试第三个斐波那契数的计算次数
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1)+Fib(n - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d\n", ret);
	printf("count = %d\n", count);
	return 0;
}
//这样的递归方式时间和空间复杂度太高，需要简化运算的次数
//由此可以延伸，将1+1=a，1+2=b，2+3=c....  也就是a+b=c以此类推，求一个数只需前两个数相加，不需要重复运算

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
