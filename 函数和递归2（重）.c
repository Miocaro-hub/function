//�����͵ݹ�2
//��ϰ2����д��������������ʱ���������ַ����ĳ���
#include<stdio.h>

//������ʱ�����ķ���
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
	int len = strlen(arr);//���ַ�������
	printf("%d\n", len); 

	//ģ��ʵ��strlen����
	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d\n", len);
	return 0;
}


//�ݹ�ķ���
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str+1);
	else
		return 0; //���ص��������my_strlen(str+1)
}

//�ɴ�С
//my_strlen("bit:);  ��һ���ַ�����\0
//1+my_strlen("it"); ��һ���ַ�����\0
//1+1+my_strlen("t"); ��һ���ַ�����\0
//1+1+1+my_strlen("\0");
//1+1+1+0=3

int main()
{

	char arr[] = "bit";
	//int len = strlen(arr);//���ַ�������
	//printf("%d\n", len); 

	//ģ��ʵ��strlen����
	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d\n", len);
	return 0;
}
