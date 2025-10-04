#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
{
    int j=1;
    while(j<=n-i+1)
    {
        cout<<j;
        j++;
    }
    int k=0;
    while(k<2*(i-1))
    {
        cout<<"*";
        k++;
    }
    int l=n-i+1;
    while(l>0)
    {
        cout<<l;
        l--;
    }
    i++;
    cout<<endl;
}
    return 0;
}