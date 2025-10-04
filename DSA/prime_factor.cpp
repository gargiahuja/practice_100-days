#include<iostream>
#include<cmath>
using namespace std;
void factor(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        
        while(a%i==0)
        {
            a=a/i;
            cout<<i<<" ";
        }
        
    }
    if(a>1)
    {
        cout<<a;
    }
}
int main()
{
    int a;
    cin>>a;
    factor(a);
    return 0;
}