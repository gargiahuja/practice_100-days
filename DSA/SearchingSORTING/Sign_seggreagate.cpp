#include<iostream>
using namespace std;
int sign(int arr[],int n)
{
    int i=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]== 0)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[n];
    cout<<"Start enering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sign(arr,n);
    return 0;
}