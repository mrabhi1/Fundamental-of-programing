#include <iostream>
using namespace std;

int findOddNum(int num1, int num2)
{
    for ( int i = num1; i < num2; i++)
    {
        if(i%2!=0)
        {
            cout<<i;
        }
    }
    
}

int main()
{
    int a,b,odd;

    cout<<"first no: ";
    cin>>a;

    cout<<"second no: ";
    cin>>b;

    odd = findOddNum(a,b);

    return 0;
}