#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
    //int n=sizeof(arr)/sizeof(arr[0]);
    int temp[high-low+1];
    int i=low;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<temp[i]<<" ";
    }
}

void mergesort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    return 0;
}