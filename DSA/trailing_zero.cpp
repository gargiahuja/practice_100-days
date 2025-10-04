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
int trailing(int f)
{   
    int count=0;
    while(f%10==0)
    {
        count++;
        f=f/10;
    }
    return count;
}
int main()
{
    int n,f;
    int count;
    cin>>n;
    f=factorial(n);
    cout<<"trailing zeroes : "<<trailing(f);
    return 0;
}