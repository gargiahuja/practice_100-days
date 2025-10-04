#include<iostream>
using namespace std;
int count(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        int t;
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;   
            }
        }
        if(c>(n/2))
        {
            return i;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<count(arr,n);
    return 0;
}