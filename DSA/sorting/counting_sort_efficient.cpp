#include<iostream>
#include<cstring>
using namespace std;
int* counting(int arr[],int n)
{
    int k;
    cout<<"K: ";
    cin>>k;
    int count[k];
    int output[n];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    return arr;
}
int main()
{
    int n;
    cout<<"SIZE: ";
    cin>>n;
    int arr[n];
    cout<<"START FILLING ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *ptr;
    ptr=counting(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}