#include<iostream>
using namespace std;
void divisor(int a)
{
    for(int i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            cout<<i<<" ";
            if(i!=a/i)
            {
                 cout<<a/i<<" ";
            }
           
        }

    }
}
int main()
{
    int a;
    cin>>a;
    divisor(a);
    return 0;
}