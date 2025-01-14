#include <iostream>
using namespace std;
int main()
{
    int array[] = {11,23,34,45,56,67,78,89,90,100};
    
    int num;

    cout<<"enter the number: "<<endl;
    cin>>num;

    int num2;
    int sum=0;

    for (int i = 0; i < 10; i++)
    {
        if (num<array[i])
        {
            num2=array[i];
        }  
    }

    for (int j = num2; j < 10; j++)
    {
        sum+=array[j];
    }
    
    cout<<"the sum of elements that is greater than "<<num<<"is "<<sum;

    return 0;
}