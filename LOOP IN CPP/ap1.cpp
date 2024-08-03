#include <iostream>
using namespace std;
int main() 
{
  
  int a=-1;
  int n;
  
  cout<<"enter the term of ap: ";
  cin>>n;
  
  for(int i=1; i<=n/2; i++)
  {
      a+=2;
      cout<<a<<",";
  }
  
    return 0;
}