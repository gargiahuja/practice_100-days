#include<iostream>
#include <limits.h>
using namespace std;
int minimum(int arr[],int n)
{
    if(n==1)
    {
        cout<<"Infinity\n";
        return 0;
    }
    int mn=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        mn=min(arr[i+1]-arr[i],mn);
    }
    return mn;
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<minimum(arr,n);
    return 0;
}