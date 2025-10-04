#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
bool LCS(string x,string y,int m,int n)
{
    int t[m+1][n+1];
    string s;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                t[i][j]=t[i-1][j-1]+1;
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    if(t[m][n]==m)
    {
        return true;
    }
    return false;
}
int main()
{
    string a,b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<LCS(a,b,a.length(),b.length());
    return 0;
}