#include<iostream>
using namespace std;
int maxsum(int arr[],int n)
{
    
    int k=-99;
    for(int i=0;i<n;i++)
    {
        int maxx=arr[i];
        int c=arr[i];
        for(int j=i+1;j<n;j++)
        {
            c=c+arr[j];
            maxx=max(c,maxx);
        }
        k=max(maxx,k);
    }
    return k;
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
    cout<<maxsum(arr,n);
    return 0;
}