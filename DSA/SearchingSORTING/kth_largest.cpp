#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
    int i=l-1,pivot=arr[r];
    for(int j=l;j<r-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],pivot);
    return i+1;
}
int kth(int arr[],int n,int k)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int p=partition(arr,l,r);
        if(p==k-1)
        {
            return arr[p];
        }
        else 
        {if(p<k-1)
        {
            l=p+1;
        }
        else
        {
            r=p-1;
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
    int k;
    cout<<"Enter the rank of the element you would wanna find\n";
    cin>>k;
    cout<<kth(arr,n,k);
    return 0;
}