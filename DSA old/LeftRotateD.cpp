#include<iostream>
using namespace std;
void rotateD(int arr[],int n,int d)
{
    int t;
    for(int i=0;i<d;i++)
    {
        if(i==0)
        {
            t=arr[i];
            i=0;
        }
        else if(i<n-1)
        {
            arr[i]=arr[i+1];
        }
        else
        {
            arr[n-1]=t;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,d;
    cout<<"enter the capacity of the array\n";
    cin>>n;
    int arr[n];
    cin>>d;
    cout<<"Start entering the values in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotateD(arr,n,d);
    return 0;
}