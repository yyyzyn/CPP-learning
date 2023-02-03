#include<iostream>
using namespace std;

//值传递//
//定义函数，该函数实现两个数互相交换//

//如果函数不需要返回值，声明的时候可以写void//
void swap(int num1,int num2)
{
    cout<<"交换前： "<<endl;
    cout<<"num1=  "<<num1<<endl;
    cout<<"num2=  "<<num2<<endl;

    int temp=num1;
    num1=num2;
    num2=temp;

    cout<<"交换后： "<<endl;
    cout<<"num1=  "<<num1<<endl;
    cout<<"num2=  "<<num2<<endl;

    return;
}


int main()
{
   int a=10;
   int b=20;

   swap(a,b);

   return 0;
}
