#include<iostream>
using namespace std;
int knapsack(int wt[],int v[],int W,int n)
{
    if(n==0||W==0)
    {
        return 0;
    }
    if(wt[n-1]<=W)
    {
        return max(v[n-1]+knapsack(wt,v,W-wt[n-1],n-1),knapsack(wt,v,W,n-1));
    }
    else if(wt[n-1]>W)
    {
        return knapsack(wt,v,W,n-1);
    }

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