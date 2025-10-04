#include<iostream>
using namespace std;
void three(int arr[],int n,int pivot)
{
    int i=-1,j=-1;
    for(int k=0;k<n;k++)
    {
        if(arr[k]<pivot)
        {
            i++;j++;
            swap(arr[k],arr[i]);
        }
        else if(arr[k]==pivot)
        {
            j++;
        }
        else if(arr[k]>pivot)
        {
            j++;
            swap(arr[k],arr[j]);
        }
    }
    for(int k=j+1;i<n;i++)
    {
        swap(arr[i+1],arr[k]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pivot;
    cout<<"Enter the pivot around which you wanna partition \n";
    cin>>pivot;
    three(arr,n,pivot);
    return 0;
}