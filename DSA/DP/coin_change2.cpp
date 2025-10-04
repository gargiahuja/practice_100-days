#include<iostream>
#include<limits.h>
using namespace std;
int coin_max(int coin[],int n,int sum)
{
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(j==0)
            {
                t[i][j]=0;
            }
            if(i==0)
            {
                t[i][j]=INT_MAX-1;
            }
        }
    }
    for(int j=1;j<sum+1;j++)
    {
        if(sum%coin[0]==0)
        {
            t[1][j]=sum/coin[0];
        }
        else
        {
            t[1][j]=INT_MAX-1;
        }
    }
    for(int i=2;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(coin[i-1]<=j)
            {
                t[i][j]=min(t[i][j-coin[i-1]]+1,t[i-1][j]);
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
int main()
{
    int n;
    cout<<"Enter the number of coins you want:\n";
    cin>>n;
    int coin[n];
    cout<<"Start entering the elements in the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }
    int sum;
    cout<<"Sum:\n";
    cin>>sum;
    cout<<"Minimum number of coins you would want for your sum is: "<<coin_max(coin,n,sum);
    return 0;
}