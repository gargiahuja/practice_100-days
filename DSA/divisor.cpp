#include<iostream>
using namespace std;
void divisor(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<n;
}
int main()
{
    int a;
    cin>>a;
    divisor(a);
    return 0;
}