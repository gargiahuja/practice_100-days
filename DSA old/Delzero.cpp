#include<iostream>
using namespace std;
void delzero(int arr[],int n)
{
    int j=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    delzero(arr,n);
    return 0;
}