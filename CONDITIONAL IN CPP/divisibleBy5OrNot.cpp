#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter the Number:";
    cin>>num;

    if (num%5==0)
    {
        cout<<"Given nember is divisible by 5";
    }

    else
    {
        cout<<"Given number is not divisible by 5";
    }

    return 0;
    
}