#include<iostream>
using namespace std;
int coin_change(int coin[],int n,int sum)
{
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            {
                t[i][j]=0;
            }
            if(j==0)
            {
                t[i][j]=1;                
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(coin[i-1]<=j)
            {
                t[i][j]=t[i-1][j]+t[i][j-coin[i-1]];
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
    cout<<"Enter the size of the array of coin you want:\n";
    cin>>n;
    int coin[n];
    cout<<"Enter the value of coins:\n";
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }
    int sum;
    cout<<"Enter the sum you want:\n";
    cin>>sum;
    cout<<"The number of ways you can get the sum is: "<<coin_change(coin,n,sum);
    return 0;;

}