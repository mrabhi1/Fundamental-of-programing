#include<iostream>
using namespace std;
int main()
{
    int x,y;

    cout<<"enter the point X: ";
    cin>>x;

    cout<<"enter the point Y: ";
    cin>>y;

    if (x==0 && y==0)
    {
        cout<<"the point is at origin";
    }

    else if (x>0 && y==0)
    {
        cout<<"the point on the X-Axis";
    }

    else if (y>0 && x==0)
    {
        cout<<"the point on the Y-Axis";
    }
    
    else
    {
        cout<<"the point is not at origin or Axis";
    }

    return 0;
    
}