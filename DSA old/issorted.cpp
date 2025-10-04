#include<iostream>
using namespace std;
void ISsorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            if(i==n-2)
            {
                cout<<"yes\n";
                return;
            }
        }
        else if(arr[i]>arr[i+1])
        {
            cout<<"no\n";
            return;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements of the array according to the size mentioned above\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ISsorted(arr,n);
    return 0;
}