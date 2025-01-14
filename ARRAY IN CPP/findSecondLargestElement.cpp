#include <iostream>
using namespace std;
int main()
{
    int array[] = {11,23,34,45,56,67,78,89,90,100};
    int max=array[0];

    for (int i = 0; i < 10; i++)
    {
        if (max<array[i])
        {
            max=array[i-1];
        }  
    }
    
    cout<<max;
}