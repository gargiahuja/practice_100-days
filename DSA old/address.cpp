#include<iostream>
using namespace std;
int main()
{
    int marks[4];
    for(int i=0;i<4;i++)
    {
        cin>>marks[i];

    }
    int* p=marks;
    for(int i=0;i<4;i++)
    {
        cout<<p++<<" "<<*p<<endl;
    }
    
    return 0;
}