#include<iostream>
#include<cstring>    
using namespace std;
int static t[1001][1001];
int longest(string X,string Y,int m,int n)
{
    if(n==0||m==0)
    {
        return 0;
    }
    if(t[m][n]!=-1)
    {
        return t[m][n];
    }
    if(X[n-1]==Y[m-1])
    {
        return t[m][n]=1+longest(X,Y,n-1,m-1);
    }
    else
    {
        return t[m][n]=max(longest(X,Y,n-1,m),longest(X,Y,n,m-1));
    }
}

int main()
{
    string X,Y;
    cout<<"Enter the string X: \n";
    cin>>X;
    cout<<"Enter the string Y: \n";
    cin>>Y;
    memset(t,-1,sizeof(t));
    cout<<longest(X,Y,X.length(),Y.length());
    return 0;
}