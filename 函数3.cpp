#include<stdio.h>
#include<string.h>

//memset void * memset { void * ptr, int value,size_t num }
//memory - �ڴ� set - ����
//Sets the first num bytes of the block of memory pointed by ptr to the specified value
//��ptrָ����ڴ��ĵ�һ��num�ֽ�����Ϊָ����ֵ

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}

//http://cppreference.com
