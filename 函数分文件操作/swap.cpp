//1、创建h头文件
//2、创建cpp源文件
//3、头文件写函数的声明
//4、在源文件中写函数定义


#include"swap.h"


//函数定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b<< endl;
}