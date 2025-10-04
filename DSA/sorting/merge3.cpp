#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1, n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[n1+i];
    }
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            k++;
            j++;
        }
        
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array \n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the values in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low,mid,high;
    cout<<"low: ";
    cin>>low;
    cout<<"mid: ";
    cin>>mid;
    cout<<"high: ";
    cin>>high;
    merge(arr,low,mid,high);
    return 0;
}