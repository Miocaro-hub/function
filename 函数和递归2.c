//函数和递归2
//练习2：编写函数不允许创建临时变量，求字符串的长度
#include<stdio.h>

//创建临时变量的方法
int my_strlen(char* str)  
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	
	char arr[] = "bit";
	int len = strlen(arr);//求字符串长度
	printf("%d\n", len); 

	//模拟实现strlen函数
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("len = %d\n", len);
	return 0;
}


//递归的方法
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str+1);
	else
		return 0; //返回的是上面的my_strlen(str+1)
}

//由大化小
//my_strlen("bit:);  第一个字符不是\0
//1+my_strlen("it"); 第一个字符不是\0
//1+1+my_strlen("t"); 第一个字符不是\0
//1+1+1+my_strlen("\0");
//1+1+1+0=3

int main()
{

	char arr[] = "bit";
	//int len = strlen(arr);//求字符串长度
	//printf("%d\n", len); 

	//模拟实现strlen函数
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("len = %d\n", len);
	return 0;
}
