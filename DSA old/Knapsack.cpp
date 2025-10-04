#include<iostream>
using namespace std;
int knapsack01(int wt[],int v[],int W, int n)
{
    int t[n+1][W+1];
    if(W==0||n==0)
    {
        return 0;
    }
    if(t[n][W]!=-1)
    {
        return t[n][W];
    }
    if(wt[n-1]<=W)
    {
        return t[n][W]=max(v[n-1]+knapsack01(wt,v,W-wt[n-1],n-1),knapsack01(wt,v,W,n-1));
    }
    else if(wt[n]>W)
    {
        return t[n][W]=knapsack01(wt,v,W,n-1);
    }
}
int main()
{
    int n,W;
    cout<<"Enter the number of items\n";
    cin>>n;
    int wt[n],v[n];
    cout<<"Enter the Maximum weight of the knapsack\n";
    cin>>W;
    cout<<"Start entering the weight and the value of the corresponing item\n";
    for(int i=0;i<n;i++)
    {
        cin>>wt[i]>>v[i];
    }
    cout<<"The maximum profit is\n"<<knapsack01(wt,v,W,n);
    return 0;
}