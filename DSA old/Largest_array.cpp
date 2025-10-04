#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int l=0,x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
            x=i;
        }
    }
    cout<<"The largest element in the array is "<<l<<" at "<<x<<"\n";
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the array elemnts according to th size\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    largest(arr,n);
    return 0;
}