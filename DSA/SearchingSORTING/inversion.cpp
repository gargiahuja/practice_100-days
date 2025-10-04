#include<iostream>
using namespace std;
int inversions(int arr[],int n,int p)
{
    int h=n,l=0,index=0;
    int temp[h-l+1];
    for(int i=l;i<h;i++)
    {
        if(arr[p]>=arr[i])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<h;i++)
    {
        if(arr[p]<arr[i])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<h;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=0;i<h;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p;
    cout<<"Enter the index you want to partiton around:\n";
    cin>>p;
    inversions(a,n,p);
    return 0;
}