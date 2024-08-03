#include<iostream>
using namespace std;
int main()
{
    int a=3,n;

    cout<<"enter the term of gp: ";
    cin>>n;
    
    cout<<a<<",";

    for (int i = 1; i <= n; i++)
    {
        if (a<n)
        {
            a*=4;
            cout<<a<<",";
        }
        
    }
    
    
}