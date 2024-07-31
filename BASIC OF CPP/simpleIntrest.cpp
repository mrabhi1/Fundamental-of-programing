#include<iostream>
using namespace std;
int main()
{
    int p,r,t,SI;

    cout<<"enter the principal, rate and time of intrest";
    cin>>p>>r>>t;

    SI=(p*r*t)/100;

    cout<<"Simple Intrest is "<<SI;

    return 0;
}