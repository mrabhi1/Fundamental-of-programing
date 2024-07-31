#include <iostream>
using namespace std;
int main()
{
    char C;

    cout<<"enter the character: ";
    cin>>C;

    if (C>'a' && C<'z')
    {
        cout<<"given character is Alphabet";
    }

    else if (C>'A' && C<'Z')
    {
        cout<<"given character is Alphabet";
    }

    else 
    {
        cout<<"given character is not Alphabet";
    }
    
}