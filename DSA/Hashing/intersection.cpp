#include<iostream>
#include<unordered_set>
using namespace std;
int intersection(int a[],int b[],int m,int n)
{
    unordered_set<int>s;
    for(int i=0;i<m;i++)
    {
        s.insert(a[i]);
    }
    int res=0;
    for(int j=0;j<n;j++)
    {
        if(s.find(b[j])!=s.end())
        {
            res++;
            s.erase(b[j]);
        }
    }
    return res;
}
int main()
{
    int m,n;
    cout<<"A SIZE: ";
    cin>>m;
    cout<<"B SIZE: ";
    cin>>n;
    int a[m],b[n];
    cout<<"Enter: \n";
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter: \n";
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    cout<<intersection(a,b,m,n);
    return 0;
}