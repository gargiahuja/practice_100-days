#include<iostream>
using namespace std;
void factor(int a)
{
    while(a%2==0)
    {
        a=a/2;
        cout<<"2 ";
    }
    while(a%3==0)
    {
        a=a/3;
        cout<<"3 ";
    }
    for(int i=5;i*i<=a;i+=6)
    {
        while(a%i==0)
        {
            cout<<i<<" ";
            a=a/i;
        }
        while(a%(i+2)==0)
        {
            cout<<i+2<<" ";
            a=a/i;
        }
    }
    if(a>3)
    {
        cout<<a<<" ";       
    }
}
int main()
{
    int a;
    cin>>a;
    factor(a);
    return 0;
}