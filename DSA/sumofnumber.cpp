#include<iostream>
using namespace std;
int fun(int n)
{
    if(n<=0)
    {
        return 0;
    }
    //a=n%10;
    return(n%10+fun(n/10));
}
int main()
{
    int n;
    cin>>n;   
    cout<<fun(n);
    return 0;
}