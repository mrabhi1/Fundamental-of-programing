#include <iostream>
using namespace std;

void countTheNumber(int num)
{
    int digit = 0;
    int temp = num;

    while(temp%10!=0)
    {
        temp = temp/10;
        digit++;
    }

    int square = digit*digit;

    cout<<"total digit in given number: "<<digit<<endl;
    cout<<"square of digit: "<<square;
    
}

int main()
{
    int a;
    
    cout<<"enter the number: ";
    cin>>a;
    
    countTheNumber(a);
}