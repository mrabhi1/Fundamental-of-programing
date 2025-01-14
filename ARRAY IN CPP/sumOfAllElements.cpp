#include<iostream>
using namespace std;
int main()
{
    int array[] = { 12,34,23,45,5,36,87 };
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        sum += array[i];
    }

    cout<<"Sum of All Elements in given Array is "<<sum;

    return 0;
    
}