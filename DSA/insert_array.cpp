#include<iostream>
using namespace std;
int insert(int arr[],int size,int neww,int cap,int pos)
{
    int index;
    if(cap==size)
    {
        return 0;
    }
    index=pos-1;
    for(int i=size-2;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=neww;
    for(int i=0;i<cap+1;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int n,neww,cap,pos;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"enter the capacity of the array\n";
    cin>>cap;
    int arr[n];
    cout<<"Start entering the elemtns of the array\n";
    for(int i=0;i<cap;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be added\n";
    cin>>neww;
    cout<<"Enter the position\n";
    cin>>pos;
    insert(arr,n,neww,cap,pos);
    
}