#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
string LCS(string X,string Y,int m,int n)
{
    int t[m+1][n+1];
    string s="";
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
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(X[i]==Y[j])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
    int i=m,j=n;
    while(i>0&&j>0)
    {
        if(X[i-1]==Y[j-1])
        {
            s.push_back(X[i-1]);
            i--;
            j--;
        }
        else 
        {
            if(t[i-1][j]>t[i][j-1])
            {
                i--;
            } 
            else
            {
                j--;
            }           
        }
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string X,Y;
    cout<<"X: ";
    cin>>X;
    cout<<"Y: ";
    cin>>Y;
    cout<<LCS(X,Y,X.length(),Y.length());
    return 0;
}