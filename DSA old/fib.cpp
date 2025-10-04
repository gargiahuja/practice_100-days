#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int n;
    cout<<"enter the position at which you want to find the value\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fib(i);
    }
    
    return 0;
}
int fib(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
    
}