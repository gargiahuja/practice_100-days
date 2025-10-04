#include<iostream>
using namespace std;
int LCS(string x,string y,int m,int n)
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
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            
            
                if(x[i-1]==y[j-1]&&i!=j)
                {
                    t[i][j]=t[i-1][j-1]+1;
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            
        }
    }
    return t[m][n];
}
int main()
{
    string x,y;
    cout<<"x: ";
    cin>>x;
    y=x;
    cout<<LCS(x,y,x.length(),y.length());
    return 0;
}