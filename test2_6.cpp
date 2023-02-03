#include<iostream>
using namespace std;

int main()
{
    int n,right_digit,newnum=0;
    cout<<"Enter the number:";//输入数字是多少//
    cin>>n;
    cout<<"The number is reverse order is";//输出后的反转数字是多少//
    do{
        right_digit=n%10;//执行语句，执行数字反转//
        cout<<right_digit;
        n/=10;
    }
    while(n!=0);//判断条件//
    cout<<endl;
    return 0;
}
