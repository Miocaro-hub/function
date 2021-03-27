#include<stdio.h>
#include<string.h>
//自定义函数
//函数的组成：
//ret_type fun_name(paral, *)
//{
//	statement;//语句项，也是函数体，交代的是函数的实现。
// }
//ret_type 返回类型
//fun_name 函数名
//paral    函数参数


//例题2：写一个函数可以找出两个整数中的最大值


//int get_max(int x, int y)  //定义函数
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//函数的使用，get max需要定义
//	printf("max = %d\n", max);
//	return 0;
//}

//例题2：写一个函数可以交换两个整形变量的内容
//void表示没有返回值
void Swap1(int x, int y)  //没有实现a,b值的交换
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa; //解引用操作
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	/*Swap1(a, b);*/
	Swap2(&a, &b);
	/*int tmp = 0;*/
	/*tmp = a;
	a = b;
	b = tmp;*/
	printf("a=%d b=%d\n", a, b);
	return 0;
}