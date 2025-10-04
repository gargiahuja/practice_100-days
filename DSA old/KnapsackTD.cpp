#include<iostream>
using namespace std;
int knapsackTD(int wt[],int v[],int n,int W)
{
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(wt[i-1]<=j)
            {
                t[i][j]=max(v[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][W];
}
int main()
{
    int n,W;
    cout<<"enter the number of items\n";
    cin>>n;
    cout<<"Enter the capacity of the knapsack\n";
    cin>>W;
    int wt[n],v[n];
    cout<<"Start entering the weight with the corressponding items value\n";
    for(int i=0;i<n;i++)
    {
        cin>>wt[i]>>v[i];
    }
    cout<<knapsackTD(wt,v,n,W);
    return 0;
}