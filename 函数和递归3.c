#define _CRT_SECURE_NO_WARNINGS
//�ݹ�͵���

//��ϰ����n�Ľ׳ˣ������������
#include<stdio.h>
#include<string.h>
int Fac1(int n)    //ѭ��
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n;i++)
	{
		ret *= i;
	}
	return ret;
}

int Fac2(int n)    //�ݹ�
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}

int main()
{
	//��n�׵Ľ׳�
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);//ѭ���ķ�ʽ
	printf("%d\n", ret);
	return 0;
}


//��ϰ�����n��쳲��������������������
int count = 0;//��Ҫ����Ĵ���
int Fib(int n)
{
	if (n == 3)  //���Ե�����쳲��������ļ������
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1)+Fib(n - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d\n", ret);
	printf("count = %d\n", count);
	return 0;
}
//�����ĵݹ鷽ʽʱ��Ϳռ临�Ӷ�̫�ߣ���Ҫ������Ĵ���
//�ɴ˿������죬��1+1=a��1+2=b��2+3=c....  Ҳ����a+b=c�Դ����ƣ���һ����ֻ��ǰ��������ӣ�����Ҫ�ظ�����

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
