#include<iostream>
using namespace std;
void prime(int n)
{
    if(n==1)
    {
        cout<<" ";
    }
    if(n==2||n==3)
    {
        cout<<n<<" ";
    }
    if(n%2==0||n%3==0)
    {
       cout<<" ";
    }
    for(int i=5;i*i<n;i+=6)
    {
        if(n%i==0||n%(i+6)==0)
        {
            cout<<n<<" ";
        }
        
    }cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        prime(i);
    }
    
    return 0;
}