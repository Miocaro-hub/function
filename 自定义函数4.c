#include<stdio.h>
#include<string.h>
#include<math.h>
//�Զ��庯����ϰ4

//����4��дһ��������ÿ����һ������������ͻὫnum��ֵ����1

void Add(int*p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);//��ӡ1
	Add(&num);
	printf("num = %d\n", num);//��ӡ2
	Add(&num);
	printf("num = %d\n", num);//��ӡ3���Դ�����
	return 0;
}