#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,total,per;

    cout<<"Enter the marks of 5 SUBJECT:";
    cin>>a>>b>>c>>d>>e;

    total=a+b+c+d+e;

    cout<<"total marks is"<<total<<endl;

    per=(total*100)/500;

    cout<<"percantage="<<per;

    return 0;