#include<iostream>
#include<cstring>
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
    int i=m,j=n;
    while(i>0&&j>0)
    {
        if(x[i-1]==y[j-1])
        {
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else
        {
            if(t[i][j-1]>t[i-1][j])
            {
                s.push_back(y[j-1]);
                j--;
            }
            else if(t[i][j-1]<t[i-1][j])
            {
                s.push_back(x[i-1]);
                i--;
            }
        }
    }
    if(s.length()==x.length())
    {
        return true;
    }
    else{
        return false;
    }
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