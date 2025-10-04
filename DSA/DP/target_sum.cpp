#include<iostream>
using namespace std;
int count(int arr[],int n,int total)
{
    int t[n+1][total+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<total+1;j++)
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
        for(int j=1;j<total+1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][total];
}
int main()
{
    int n,s=0,d;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s=s+arr[i];
    }
    cout<<"please enter sum you wanna find\n";
    cin>>d;
    int total=(s+d)/2;
    cout<<count(arr,n,total);

    return 0;
}