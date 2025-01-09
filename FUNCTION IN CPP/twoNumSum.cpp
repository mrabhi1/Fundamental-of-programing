#include<iostream>
using namespace std;
void printOddNumber(int a,int b)
{
    int x,y;
    
    cout<<"enter num1: ";
    cin>>x;
    
    cout<<"enter num2: ";
    cin>>y;
    
    cout<<"odd number between these two numbers is:"<<endl;
     
    for(int i=x; i<=y; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int a,b;
    
    printOddNumber(a,b);
}