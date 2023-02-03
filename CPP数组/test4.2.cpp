#include<iostream>
using namespace std;
//数组名用途//
//一维数组名称用途//
int main()
{
//1、可以统计整个数组在内存中的长度  sizeof()//
int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout <<"整个数组占用内存空间："<< sizeof(arr) << endl;
cout <<"每个元素占用内存空间："<<sizeof(arr[0]) << endl;
cout <<"数组中元素个数:"<<sizeof(arr) /sizeof(arr[0])<< endl;
//2、可以获取数组在内存中首个地址//


return 0;

}
