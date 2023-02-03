#include<iostream>
using namespace std;

//定义函数2//
int fun2(int m)
{
   return m*m;
}

//定义函数1//
int fun1(int x,int y)
{
  return fun2(x)+fun2(y);//在函数1中调用函数2//
}

int main()
{
    int a;
    int b;
    cout << "enter two integers(a and b)"<< endl;
    cin >> a>>b;
    cout<< "The sum of square of a and b:"<<fun1(a,b)<<endl;
    return 0;
}
