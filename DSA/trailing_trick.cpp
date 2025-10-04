#include<iostream>
using namespace std;
int trailing(int a)
{
    int res=0;
    for(int i=5;i<=a;i=(i*5))
    {
        res=res+(a/i);
    }
    return res;
}
int main()
{
    int a;
    cin>>a;
    cout<<"trailing zeroes are : "<<trailing(a);
    return 0;
}