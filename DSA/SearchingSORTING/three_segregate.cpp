#include<iostream>
using namespace std;
void three(int arr[],int n)
{
    int i=-1,j=-1;
    for(int k=0;k<n;k++)
    {
        if(arr[k]==0)
        {
            i++;j++;
            swap(arr[k],arr[i]);
        }
        else if(arr[k]==1)
        {
            j++;
            swap(arr[k],arr[j]);
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
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    three(arr,n);
    return 0;
}