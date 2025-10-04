#include<iostream>
#include <cstring>
#include<climits>
using namespace std;
int static t[1001][1001];
bool ispalindrome(string s,int i,int j)
{
    if(i==j)
    {
        return true;
    }
    if(i>j)
    {
        return true;
    }
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
}
int solve(string s,int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    if (ispalindrome(s,i,j)==true)
    {
        return 0;
    }
    if(t[i][j]!=-1)
    {
        return t[i][j];
    }
    int mn=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        if(temp<mn)
        {
            mn=temp;
        }
    }
    return t[i][j]=mn;
}
int main()
{
    string s;
    cout<<"Enter the name you wold want to check the partition of: ";
    cin>>s;
    memset(t,-1,sizeof(t));
    cout<<solve(s,0,s.length()-1)<<" partitions need to be done.\n";
    return 0;
}