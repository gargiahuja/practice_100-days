#include<iostream>
using namespace std;
int unbounded(int wt[],int val[],int n,int W)
{
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            if(i==0)
            {
                t[i][j]=0;
            }
            if(j==0)
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
                t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
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
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int wt[n],val[n];
    cout<<"Enter the weigth and value of the corresponding item\n";
    for(int i=0;i<n;i++)
    {
        cin>>wt[i]>>val[i];
    }
    int W;
    cout<<"What is the maximum weight of the knapsack\n";
    cin>>W;
    cout<<unbounded(wt,val,n,W);
    return 0;
}