#include<iostream>
using namespace std;
int subset(int arr[],int n,int S,int D)
{
    int t[n+1][S+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<=S;j++)
        {
            if(j==0)
            {
                t[i][j]=1;
            }
            else if(i==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<S+1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
            }
            else if(arr[i-1]>j)
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][(D+S)/2];
}
int main()
{
    int  n;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    int S=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        S=S+arr[i];
    }
    int D;
    cout<<"Diff: ";
    cin>>D;
    cout<<subset(arr,n,S,D);
    return 0;
}