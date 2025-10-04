#include<iostream>
using namespace std;
void leader(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        while(arr[i]>arr[j])
        {
            j++;
            if(j==n)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<arr[n-1];
}
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the values in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    leader(arr,n);
    return 0;
}