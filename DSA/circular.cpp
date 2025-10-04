#include<iostream>
using namespace std;
int summ(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    return s;
}
int minsubarray(int arr[],int n)
{
    int t=arr[0];
    int circular=arr[0];
    for(int i=1;i<n;i++)
    {
        t=min(t+arr[i],arr[i]);
        circular=min(circular,t);
    }
    return circular;
}
int maxsubarray(int arr[],int n)
{
    int k=arr[0];
    int straightmax=arr[0];
    int max_circular=0;
    for(int i=1;i<n;i++)
    {
        k=max(k+arr[i],arr[i]);
        straightmax=max(straightmax,k);
    }
    max_circular=max(straightmax,summ(arr,n)-minsubarray(arr,n));
    return max_circular;
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxsubarray(arr,n);
    return 0;
}