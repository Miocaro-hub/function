#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数递归
//程序调用自身的编程技巧称为递归。递归做为一种算法在程序设计语言中广泛应用
//递归的主要思考方式在于：把大事化小

int main()       //简单的递归
{
	printf("haha\n");
	main();
	return 0;
}
//运行中程序会终止，原因是栈溢出，无限的递归使得栈区的空间不够，就会出现stack overflow栈溢出的情况
//栈区：局部变量、函数形参  
//堆区：动态开辟的内存，例如malloc,calloc
//静态区：全局变量，例如static修饰的变量



//函数递归练习题:接受一个整型值(无符号)，按照顺序打印它的每一位。例如：输入1234，输出1 2 3 4
void print(int n) 
{
	if (n > 9)
	{
		print(n / 10);//程序未结束，接着走print函数的程序
	}
	printf("%d ", n % 10);
}


int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234  每次除10取余就可以分别得到4,3,2,1
	//用递归的方法
	print(num);
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4
	return 0;
}

//递归的两个必要条件：
//1、存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2、每次递归调用之后越来越接近这个限制条件
