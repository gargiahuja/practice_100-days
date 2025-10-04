#include<iostream>
#include<unordered_set>
using namespace std;
int unionn(int a[],int b[],int m,int n)
{
    unordered_set<int>s;
    for(int i=0;i<m;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}
int main()
{
    int n,m;
    cout<<"A SIZE: ";
    cin>>m;
    cout<<"B SIZE: ";
    cin>>n;
    int a[m],b[n];
    cout<<"ENTER: ";
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER: ";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<unionn(a,b,m,n);
    return 0;
}