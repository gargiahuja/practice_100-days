#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        int min=100;
        for(int j=i;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                k=j;
            }    
        }
        int temp=arr[k];
        arr[k]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    return 0;
}