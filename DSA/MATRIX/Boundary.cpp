#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"M: ";
    cin>>m;
    cout<<"N: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        if(i==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        if(i>=1&&i<m-1)
        {
            cout<<arr[i][n-1]<<" ";
        }
        if(i==m-1)
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    for(int i=m-2;i>=1;i--)
    {
        cout<<arr[i][0]<<" ";
    }
    
    return 0;
}