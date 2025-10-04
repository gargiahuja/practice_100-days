#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lomuto(int arr[],int l,int h)
{
    int i=-1;
    int p=arr[h];
    for(int j=l;j<h;j++)
    {
        if(arr[j]<=p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void Qsort(int arr[],int l,int h,int n)
{
    if(l<h)
    {
        int p=lomuto(arr,l,h);
        Qsort(arr,l,p-1,n);
        Qsort(arr,p+1,h,n);
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Qsort(arr,0,n-1,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}