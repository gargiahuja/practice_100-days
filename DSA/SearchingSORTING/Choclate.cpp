#include<iostream>
// #include <bits/stdc++.h>
using namespace std;
int choclate(int arr[],int n,int m)
{
    int res=arr[m-1]-arr[0];
    if(m>n)
    {
        return -1;
    }
    for(int i=1;(i+m-1)<n;i++)
    {
        res=min(res,arr[i+m-1]-arr[i]);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of the elements\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the number of children for the distribution purpose\n";
    cin>>m;
    cout<<choclate(arr,n,m);
    return 0;
}