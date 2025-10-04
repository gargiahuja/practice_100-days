#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
       return(n*factorial(n-1));
}
int main()
{
    int n,f;
    cin>>n;
    f=factorial(n);
    cout<<n<<"! = "<<f;
    return 0;
}