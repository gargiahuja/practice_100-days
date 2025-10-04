#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
            return -1;
}
int main()
{
    int n,x;
    cout<<"enter the size\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be searched \n";
    cin>>x;
    cout<<search(arr,n,x);
}