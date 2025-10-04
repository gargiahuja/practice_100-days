#include<iostream>
using namespace std;
int repeating(int arr[],int n)
{
    int slow=arr[0]+1,fast=arr[0]+1;
    do
    {
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    }
    while(slow!=fast);
    slow=arr[0]+1;
    while(slow!=fast)
    {
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }
    return slow-1;
}
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the values in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the element which is repeatd in the array\n"<<repeating(arr,n);
    return 0;
}