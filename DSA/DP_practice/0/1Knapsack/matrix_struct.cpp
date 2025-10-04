#include<iostream>
using namespace std;
int knapsack(int wt[],int v[],int n,int W)
{
    int t[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            {
                t[i][j]=0;
            }
            if(wt[i-1]<=j)
            {
                t[i][j]=max(v[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else if(wt[i-1]>j)
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][W];
}
int main()
{
    int n;
    cout<<"Enter the size of the array you want for weight and value: ";
    cin>>n;
    int wt[n];
    int v[n];
    for (int i=0;i<n;i++)
    {
        cin>>wt[i]>>v[i];
    }
    int W;
    cout<<"Enter the capacity of the kanpsack: ";
    cin>>W;
    cout<<knapsack(wt,v,W,n);
    return 0;
}