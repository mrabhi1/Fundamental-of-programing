#include<iostream>
using namespace std;
int main()
{
    float r,A,C;

    cout<<"enter the radius of circle: ";
    cin>>r;

    A=3.14*r*r;
    C=2*3.14*r;
    
    cout<<"Area of Circle is "<<A<<endl;
    cout<<"Circumference of Circle is "<<C<<endl;

    if (A>C)
    {
        cout<<"Area is larger than Circumference";
    }

    else
    {
        cout<<"Area is not larger than Circumference";
    }

    return 0;

}