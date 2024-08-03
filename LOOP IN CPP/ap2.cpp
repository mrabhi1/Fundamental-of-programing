#include<iostream>
using namespace std;
int main()
{
    int n,a=100;
     
    cout<<"enter the term of ap:" ;
    cin>>n;
    
    cout<<a<<",";

    while (a>n)
    {
        a-=3;
        cout<<a<<",";
        
    }

}