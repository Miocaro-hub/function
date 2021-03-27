#include<stdio.h>
#include<string.h>
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}



int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);

	printf("&d/n", sum);
	return 0;
}

//funtion - 函数  char* - 指针类型

//strcpy  char*strcpy(char*destination,const char*source);
//一般指针在函数后面，Copies the C string pointed by source into the array pointed by destination,including the terminating null character.

//destination:Pointer to the destination array where the content is to be copied.
//sourec: C string to be copied.


//memset  void*memset(void*ptr,int value,size_t num);


int main()
{
	//strlen - string length - 求字符串长度
	//strcpy - string copy - 字符串拷贝
	char arr1[] = "bit1";
	char arr2[20] = "12345";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
