#include<iostream>
using namespace std;

//数组学习//

int main()
{
//数组定义方法//
//1、数据类型  数组名[数组长度]：//
int arr[5];
//给数组中元素进行赋值//
 arr[0]=10;
 arr[1]=20;
 arr[2]=30;
 arr[3]=40;
 arr[4]=50;
//访问数组元素//
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
cout<<arr[3]<<endl;
cout<<arr[4]<<endl;

//2、数据类型 数组名[数组长度]={值1，值2....}//
int arr2[5]={10,20,30,40,50};
//for循环输出数组元素//
for(int i=0;i<5;i++)
{
    cout<<arr2[i]<<endl;
}
//3、数据类型  数组名[]={值1，值2，值3....}
int arr3[]={90,80,70};
for(int i=0;i<3;i++)
{
    cout<<arr3[i]<<endl;
}

     return 0;
}
