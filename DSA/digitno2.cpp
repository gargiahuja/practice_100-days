#include<iostream>
using namespace std;
int count;
int fun(int n)
{
    if(n==0)
    {
        return count;
    }
    else
    {
        count++;
    }
    fun(n/10);
}
int main()
{
    int a;
    cin>>a;
    fun(a);
    cout<<count;
    return 0;
}