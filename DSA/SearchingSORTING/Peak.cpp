#include<iostream>
using namespace std;
int peak(int arr[],int n)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if((mid==0||arr[mid]>=arr[mid-1])&&(mid==n-1||arr[mid]>=arr[mid+1]))
        {
            return arr[mid];
        }
        else if(mid>0&&arr[mid]<arr[mid-1])
        {
            end=mid-1;
        }
        else if(mid>0&&arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to add\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<peak(arr,n);
    return 0;
}