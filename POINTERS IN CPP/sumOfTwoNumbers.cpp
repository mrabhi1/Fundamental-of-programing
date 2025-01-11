#include <iostream>
using namespace std;
int main()
{   
    int x,y;
    
    cout<<"enter the two numbers: ";
    cin>>x>>y;
    
    int*ptr1=&x;
    int*ptr2=&y;
    
    int result;
    
    int*ptr_result=&result;
    
    *ptr_result=*ptr1+*ptr2;
    
    cout<<ptr_result<<endl;
    cout<<*ptr_result;
    
    return 0;
}