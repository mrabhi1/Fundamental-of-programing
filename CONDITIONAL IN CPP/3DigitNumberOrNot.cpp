#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter the positive integer: ";
    cin>>num;

    if (num>100 && num<999)
    {
        cout<<"this is 3 digit number";
    }

    else
    {
        cout<<"this is not 3 digit number";
    }
    
    return 0;

}