//实际参数（实参）
//真实传给参数，叫实参。实参可以是：常量、变量、表达式、函数等。无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传给形参。

//例如
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	max = get_max(100, 300 + 1);         //实参是常量、变量、表达式、函数皆可
	max = get_max(100, get_max(3, 7));
	printf("max = %d\n", max);
	return 0;
}


//形式参数（形参）
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），所以叫形式参数。
//形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。

void Swap1(int x, int y)  
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	/*Swap1(a, b);*/
	Swap2(&a, &b);     //调用函数
	/*int tmp = 0;*/
	/*tmp = a;
	a = b;
	b = tmp;*/
	printf("a=%d b=%d\n", a, b);
	return 0;
}

//上面Swap1和Swap2函数中的参数x,y,px,py都是形式参数。在main函数中传给Swap1的num1,num2和传给Swap2函数的&num1,&num2是实际参数。

//当实参传给形参时，形参其实是实参的一份临时拷贝，对形参的改变不会改变实参

//函数的调用：传值调用、传址调用
//传址调用：把函数外部创造变量的内存地址传递给函数参数的一种调用函数的方式，这种传参方式可以让函数和函数外边的变量建立起真正的练习，也就是函数内部可以直接操作函数外部的变量
