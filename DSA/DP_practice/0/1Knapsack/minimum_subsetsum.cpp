#include<iostream>
#include<vector>
using namespace std;
int subset(int arr[],int n,int S)
{
    bool t[n+1][S+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=S;j++)
        {
            if(j==0)
            {
                t[i][j]=true;
            }
            else if(i==0)
            {
                t[i][j]=false;
            }
        }
        
    }
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=S;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
            }
            else if(arr[i-1]>j)
            {
               t[i][j]=t[i-1][j];
            }
        }
    }
    int d=100000000;
    for(int i=0;i<=S/2;i++)
    {
        if(t[n][i])
        {
            d=min(d,S-2*i);
        }
    }
    return d;
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
    
    cout<<subset(arr,n,S);

    return 0;
}