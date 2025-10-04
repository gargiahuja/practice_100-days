#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hoare(int arr[],int l,int h,int n)
{
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(1)
    {
        do{
            i++;
        }
        while(arr[i]<pivot);
        do
        {
            j--;
        }
        while(arr[j]>pivot);
        if(i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<hoare(arr,0,n-1,n);
    return 0;
}