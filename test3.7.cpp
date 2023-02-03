#include<iostream>
using namespace std;

//计算从n个人里选k个人的组合数//
int comm(int n,int k)//定义使用函数//
{
  if(k>n)//如果k比n大//
     return 0;//输出0//
  else if(n==k||k==0)
     return 1;//输出1//
  else
     return comm(n-1,k)+comm(n-1,k-1);//递归调用//
}

int main()
{
   int n;
   int k;
   cout << "enter two integers n and k:"<< endl;//输入//
   cin>>n>>k;
   cout<<"C(n,k)= "<<comm(n,k)<<endl;//输出//
   return 0;
}
