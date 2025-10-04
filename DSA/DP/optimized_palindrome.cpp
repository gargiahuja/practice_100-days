#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
static int t[1001][1001];
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
    if(ispalindrome(s,i,j)==true)
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
        int left,right;
        if(t[i][k]!=-1)
        {
            left=t[i][k];
        }
        else
        {
            left=solve(s,i,k);
            t[i][k]=left;
        }
        if(t[k+1][j]!=-1)
        {
            right=t[k+1][j];
        }
        else
        {
            right=solve(s,k+1,j);
            t[k+1][j]=right;
        }
        int temp=left+right+1;
        if(mn>temp)
        {
            mn=temp;
        }
    }
    return t[i][j]=mn;
}
int main()
{
    string s;
    memset(t,-1,sizeof(t));
    cout<<"enter the string you would want to partition: ";
    cin>>s;
    cout<<solve(s,0,s.length()-1)<<" no of partitions.";
    return 0;
}