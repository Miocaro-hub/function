#include <iostream.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(“pause”) or input loop */
int dec(int a, int b);
int main()
{
	int li_num;
	li_num = dec(10.3, 3.0);
	cout << “Number = ” << li_num;
	return 1;
}
int dec(int a, int b)
{
	return a - b;
}
//在任何情况下，C++能自动将变量的类型转换为与参数一致的类型；参数自动转换
