#include<stdio.h>
#include<string.h>
//�Զ��庯��
//��������ɣ�
//ret_type fun_name(paral, *)
//{
//	statement;//����Ҳ�Ǻ����壬�������Ǻ�����ʵ�֡�
// }
//ret_type ��������
//fun_name ������
//paral    ��������


//����2��дһ�����������ҳ����������е����ֵ


//int get_max(int x, int y)  //���庯��
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//������ʹ�ã�get max��Ҫ����
//	printf("max = %d\n", max);
//	return 0;
//}

//����2��дһ���������Խ����������α���������
//void��ʾû�з���ֵ
void Swap1(int x, int y)  //û��ʵ��a,bֵ�Ľ���
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa; //�����ò���
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	/*Swap1(a, b);*/
	Swap2(&a, &b);
	/*int tmp = 0;*/
	/*tmp = a;
	a = b;
	b = tmp;*/
	printf("a=%d b=%d\n", a, b);
	return 0;
}