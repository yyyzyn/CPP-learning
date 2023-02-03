#include<iostream>
using namespace std;
int main()
{
    int year;
    bool isLeapYear;//设置真假类型变量//

    cout<<"Enter the year:";
    cin >> year;
    isLeapYear=((year%4==0&&year%100!=0)||(year%400==0));// 判断条件设置//
     if(isLeapYear)//条件判断//
         cout<<year<<"is aleap year"<<endl;
     else
         cout<<year<<"is not aleap year"<<endl;
    return 0;
}
