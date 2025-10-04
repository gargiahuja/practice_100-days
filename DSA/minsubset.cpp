#include<iostream>
using namespace std;
int minsubset(int arr[],int n)
{
    int minsum=0;
    int range=0;
    for(int i=0;i<n;i++)
    {
        range=range+arr[i];
    }
    bool t[n+1][(range)+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<range+1;j++)
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
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<range+1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i]]||t[i-1][j];
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    if(range%2!=0)
    {
        for(int i=range/2;i>=0;i--)
        {
            if(t[n][i]==true)
            {
                minsum=range-(2*i);
                return minsum;
            }
        }
    }
    else
    {
        for(int i=(range/2)-1;i>=0;i--)
        {
            if(t[n][i]==true)
            {
                minsum=range-(2*i);
                return minsum;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<minsubset(arr,n);
    return 0;
}