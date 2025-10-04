#include<iostream>
using namespace std;
void inversions(int arr[],int n,int p)
{
    for(int i=0;i<n;i++)
    {
        if(arr[p]>=arr[i])
        {
            cout<<arr[i]<<" ";
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[p]<arr[i])
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n,p;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering thr elements in the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index you want to partiton around:\n";
    cin>>p;
    inversions(arr,n,p);
    return 0;
}