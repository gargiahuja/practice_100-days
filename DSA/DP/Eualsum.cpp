#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    return s;
}
void equalsum(int arr[],int n,int s)
{
    bool t[n+1][(s/2)+1];
    if(s%2!=0)
    {
        cout<<"False";
    }
    else
    {
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<((s/2)+1);j++)
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
            for(int j=1;j<((s/2)+1);j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        cout<<t[n][(s/2)];
    }
    
    
    }
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=sum(arr,n);
    cout<<"......";
    equalsum(arr,n,k);
    return 0;
}