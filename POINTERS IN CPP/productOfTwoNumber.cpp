#include <iostream>
using namespace std;
int main()
{
    int x,y,mul;

    cout<<"enter two numbers: ";
    cin>>x>>y;

    int*ptr1=&x;
    int*ptr2=&y;
    int*ptr3=&mul;

    *ptr3=*ptr1 * *ptr2;

    cout<<*ptr3;

}        