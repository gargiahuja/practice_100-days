#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[k]>arr[j])
            {
                k=j;
            }
        }
        swap(arr[k],arr[i]);
    }
}
int main()
{
    int n;
    cout<<"SIZE: ";
    cin>>n;
    int arr[n];
    cout<<"ELEMENS: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}