#include<iostream>
#include<cstring>
using namespace std;
int LCS(string X,string Y,int m,int n)
{
    int t[m+1][n+1];
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
    return t[m][n];
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