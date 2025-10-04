#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n;
    cout<<"enter the number whose factorial you would like to calculate\n";
    cin>>n;
    
    cout<<factorial(n);
    return 0;
}
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else 
    {
        return (n*factorial(n-1));
    }
}