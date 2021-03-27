#include<stdio.h>
#include<string.h>

//memset void * memset { void * ptr, int value,size_t num }
//memory - 内存 set - 设置
//Sets the first num bytes of the block of memory pointed by ptr to the specified value
//将ptr指向的内存块的第一个num字节设置为指定的值

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}

//http://cppreference.com
