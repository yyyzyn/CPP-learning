#include<iostream>
#include<cmath>
//系统函数使用//
using namespace std;

const double PI=3.14159265358979;

int main()
{
    double angle;
    cout << "enter an Angle"<< endl;
    cin >> angle;  //输入角度值//

    double radian=angle*PI/180;//转换为弧度制//
    cout << "sin("<<angle<< ")= "<<sin(radian)<< endl;//sin函数//
    cout << "cos("<<angle<< ")= "<<cos(radian)<< endl;//cos函数//
    cout << "tan("<<angle<< ")= "<<tan(radian)<< endl;//tan函数//
    return 0;
}
