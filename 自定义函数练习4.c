#include<stdio.h>
#include<string.h>
#include<math.h>
//自定义函数练习4

//例题4：写一个函数，每调用一次这个函数，就会将num的值增加1

void Add(int*p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);//打印1
	Add(&num);
	printf("num = %d\n", num);//打印2
	Add(&num);
	printf("num = %d\n", num);//打印3，以此类推
	return 0;
}
