#include<iostream>
using namespace std;
int repeating(int arr[],int n)
{
    int slow=arr[0],fast=arr[0];
    do
    {
        slow=arr[slow];
        fast=arr[arr[fast]];
    }
    while(slow!=fast);
    slow=arr[0];
    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
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