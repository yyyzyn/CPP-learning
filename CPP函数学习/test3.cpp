#include<iostream>
using namespace std;

//加法函数，实现将两个数值相加并且返回//
//函数定义流程//
int add(int num1,int num2)//返回值类型  函数名（参数列表）//
{
    int sum=num1+num2;//函数体语句//
    return sum;//return表达式//
}

//调用函数，main函数中调用加法函数/
int main()
{
    int a=10;
    int b=20;

   int c= add(a,b);//函数名称（参数）//

   cout<<"c= "<<c<<endl;

    system("pause");
    return 0;

}
