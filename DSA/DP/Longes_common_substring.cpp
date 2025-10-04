#include<iostream>
using namespace std;
int LCSubstring(string X,string Y,int m,int n)
{
    int t[m+1][n+1];
    int a=0;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(j==0||i==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(X[i-1]==Y[j-1])
            {
                t[i][j]=t[i-1][j-1]+1;
            }
            else
            {
                t[i][j]=0;
            }
            a=max(t[i][j],a);
        }
    }
    return a;
}
int main()
{
    string X,Y;
    cout<<"X: ";
    cin>>X;
    cout<<"Y: ";
    cin>>Y;
    cout<<LCSubstring(X,Y,X.length(),Y.length());
    return 0;
}