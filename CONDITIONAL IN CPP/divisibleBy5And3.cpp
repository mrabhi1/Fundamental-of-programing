#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter the positive";
    cin>>num;

    if (num%5==0 && num%3==0)
    {
        cout<<"given number is divisible by 5 and 3";
    }

    else
    {
        cout<<"given number is not divisible by 5 and 3";
    }
    
    return 0;

}