#include <iostream>
using namespace std;

float areaOfCircle(int radius, float pi)
{
    return pi*radius*radius;
}

int main()
{
    int r;
    float pi=3.14;

    cout<<"enter the radius of circle: ";
    cin>>r;

    int area = areaOfCircle(r,pi);

    cout<<"area of circle is "<<area;

    return 0;
}