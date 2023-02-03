#include<iostream>
using namespace std;
//汉诺塔问题//

//把src针最上面一个盘子移动到dest针上//
void move(char src,char dest)
{
    cout<<src<<"-->"<<dest<<endl;
}

//把n个盘子从src针移动到dest针，以medium针作为中介//
void hanoi(int n,char src,char medium,char dest)
{
    if(n==1)
      move(src,dest);
    else
    {
        hanoi(n-1,src,dest,medium);
        move(src,dest);//调用move函数//
        hanoi(n-1,medium,dest,src);
    }
}


//主函数//
int main()
{
    int m;
    cout<<"Enter the number of diskes:"<<endl;//输入//
    cin>>m;
    cout<<"the steps to moving"<<m<<"diskes:"<<endl;//输出//
    hanoi(m,'A','B','C');//调用函数//
    return 0;
}
