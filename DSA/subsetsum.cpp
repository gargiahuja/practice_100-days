#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int minsubset(int arr[],int n,int sum)
{
    bool t[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            {
                t[i][j]=false;
            }
            if(j==0)
            {
                t[i][j]=true;
            }
        }
    }
    for (int i = 1; i <n+1; i++)
    {
        for ( int j = 1; i < sum+1; j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        } 
    }
    int mn=INT_MAX;
    vector<int>v;
    for(int i=0;i<sum;i++)
    {
        if(t[n][i]==true)
        {
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        mn=min(mn,abs(sum-(2*v[i])));
    }
    return mn;
}
int main()
{
    int n,sum=0;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<minsubset(arr,n,sum);
    return 0;
}