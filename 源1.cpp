#include <iostream.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(��pause��) or input loop */
int dec(int a, int b);
int main()
{
	int li_num;
	li_num = dec(10.3, 3.0);
	cout << ��Number = �� << li_num;
	return 1;
}
int dec(int a, int b)
{
	return a - b;
}
//���κ�����£�C++���Զ�������������ת��Ϊ�����һ�µ����ͣ������Զ�ת��