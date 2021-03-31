//函数的嵌套调用和链式访问

//嵌套调用
#include<stdio.h>
void new_line()
{
	printf("haha\n");
}

void three_line()
{
	int k = 0;
	for (k = 0; k < 3; k++)
	{
		new_line();
	}
}

int main()
{
	three_line();
	return 0;
}


//链式访问，把一个函数的返回值作为另外一个函数的参数
#include<stdio.h>
#include<string.h>
int main()
{
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2
	printf("%d\n", strlen("abc"));
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43))); 
	//打印返回值,each of these functions returns the number of characters printed,or negative value if an error occurs
	//把一个函数的返回值作为另一个函数的参数
	//分解步骤：printf("%d",printf("%d",2))--printf("%d",1)   所以打印结果为4321
	return 0;
}


//函数的定义和声明
//函数分为三部分：函数声明、函数调用、函数定义，一般来说将声明放在一个单独头文件，函数定义放在一个单独的源文件
//函数声明：1、告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但具体是不是存在，无关紧要。
//          2、函数的声明一般出现在函数的使用之前，要满足先声明后使用。
//          3、函数的声明一般要放在头文件中。

//函数定义：函数的定义是指函数的具体实现，交代函数的功能实现
