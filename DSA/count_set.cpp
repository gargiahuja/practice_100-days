#include<iostream>
using namespace std;
int count(int n)
{
    int res=0;
    while(n>0)
    {
        if(n%2!=0)
        {
            res++;
           
        }
        n/=2;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}