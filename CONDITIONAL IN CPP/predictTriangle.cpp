#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"write three sides of triangle: ";
    cin>>a>>b>>c;

    if (a==b && a==c)
    {
        cout<<"this is equilateral triangle";
    }

    else if (a==b && a!=c)
    {
        cout<<"this is isosceles triangle";
    }

    else if (a!=b && a!=c)
    {
        cout<<"this is scalene triangle";
    }

    return 0;
    
}