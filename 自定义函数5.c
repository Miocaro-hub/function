//������Ƕ�׵��ú���ʽ����

//Ƕ�׵���
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


//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
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
	//��ӡ����ֵ,each of these functions returns the number of characters printed,or negative value if an error occurs
	//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
	//�ֽⲽ�裺printf("%d",printf("%d",2))--printf("%d",1)   ���Դ�ӡ���Ϊ4321
	return 0;
}


//�����Ķ��������
//������Ϊ�����֣������������������á��������壬һ����˵����������һ������ͷ�ļ��������������һ��������Դ�ļ�
//����������1�����߱�������һ��������ʲô��������ʲô������������ʲô���������ǲ��Ǵ��ڣ��޹ؽ�Ҫ��
//          2������������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//          3������������һ��Ҫ����ͷ�ļ��С�

//�������壺�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ��