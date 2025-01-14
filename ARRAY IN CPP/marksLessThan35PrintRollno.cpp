#include<iostream>
using namespace std;
int main()
{
    int marks[] = { 30,70,85,28,98 };
    int rollno[] = { 1,2,3,4,5 };
    
    int size = sizeof(marks)/sizeof(marks[0]);
    
    for(int i=0;i<size;i++)
    {
        if(marks[i]<35)
        {
            cout<<"RollNo -> "<<rollno[i]<<endl;
        }
    }
}