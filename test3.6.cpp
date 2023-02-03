#include<iostream>
using namespace std;
//函数递归使用//
//计算n的阶乘//
//定义n的阶乘计算方法//
unsigned fac(unsigned n)
{
    unsigned f;
    if(n==0)
       f=1;
    else
       f=fac(n-1)*n;//在函数中递归调用//
    return f;
}

int main()
{
    unsigned n;
    cout << "Enter a positive integer:"<< endl;//输入数字//
    cin >> n;
    unsigned y = fac(n);//调用函数//
    cout <<n<<"! ="<< y<< endl;//输出结果//
    return 0;
}
