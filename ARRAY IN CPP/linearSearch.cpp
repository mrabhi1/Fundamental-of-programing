#include<iostream>
using namespace std;
int main()
{
    int array[] = { 12,23,34,45,56,67,78,89,90 };
    int num;
    
    cout<<"Array = 12,23,34,45,56,67,78,89,90"<<endl;
    cout<<"enter the finding element: "<<endl;
    cin>>num;

    for (int i = 0; i < 9; i++)
    {
        if (array[i] == num)
        {
            cout<<"address of element: "<<i;
        }
    }
}