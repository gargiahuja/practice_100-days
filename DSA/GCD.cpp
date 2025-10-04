#include<iostream>
using namespace std;
int main()
{
    int a,b,max=0;
    cin>>a>>b;
    if(a>b)
    {
        max=a;
    }
    else 
    {
        max=b;
    }
    // cout<<max;
    for(int i=max;i>=1;i--)
    {
        if(a%i==0)
        {
            if(b%i==0)
            {
                cout<<i<<" ";
                break;
            }
        }
    }
    return 0;
}