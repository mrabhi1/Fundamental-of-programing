#include <iostream>
using namespace std;
int main()
{
    int l=20,w=10,a,p;

    a=l*w;
    p=2*(l+w);

    cout<<"Area of rectangle is "<<a<<endl;
    cout<<"Perimeter of rectangle is "<<p<<endl;

    if (a>p)
    {
        cout<<"Area is greater than Perimeter";
    }

    else
    {
        cout<<"Perimeter is greater than Area";
    }
    
}