#include<iostream>
using namespace std;
void countingSort(int arr[],int n,int exp)
{
    int temp[10];
    int output[n];
    for(int i=0;i<10;i++)
    {
        temp[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        temp[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        temp[i]=temp[i]+temp[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[temp[(arr[i]/exp)%10]-1]=arr[i];
        temp[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}
void RadixSort(int arr[],int n)
{
    int mx=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
    }
    for(int exp=1;mx/exp>0;exp=exp*10)
    {
        countingSort(arr,n,exp);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"SIZE: ";
    cin>>n;
    int arr[n];
    cout<<"FILL THE ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    RadixSort(arr,n);
    return 0;
}