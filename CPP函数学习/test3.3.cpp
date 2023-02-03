#include<iostream>
using namespace std;
//函数的声明//

//函数声明//
//声明可以写多次，定义只能写一次//
int max(int a,int b);



int main()
{
    int a=10;
    int b=20;

    cout <<max(a,b) <<endl;
    return 0;
}

//函数定义//
int max(int a,int b)
{
    return a > b ? a : b;
}
