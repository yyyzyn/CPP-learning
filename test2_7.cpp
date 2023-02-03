#include<iostream>
using namespace std;

int main()
{
    int i=1,sum=0;
    do{
        sum+=i;//do while条件设置//
        i++;
    }
    while(i<=10);//while条件判断//
    cout<<"sum= "<<sum<<endl;
    return 0;
}
