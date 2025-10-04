#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inversion(int arr[],int n)
{
    int i=-1;
    int p=arr[n-1];
    for(int j=0;j<n;j++)
    {
        if(arr[j]<=p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[n-1]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in an array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    inversion(arr,n);
    return 0;
}