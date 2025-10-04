#include<iostream>
using namespace std;
void deletee(int arr[],int n,int k)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            c++;
        }
        else
        {
            arr[i-c]=arr[i];
        }
    }
    for(int i=0;i<n-c;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int k,n;
    cout<<"Enter the value to be deleted\n";
    cin>>k;
    int arr[8];
    n=8;
    cout<<"Start entering the values int the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    deletee(arr,n,k);
    return 0;
}