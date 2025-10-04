#include<iostream>
using namespace std;
int del(int arr[],int s,int d)
{
    if(d>=s)
    {
        cout<<"please enter a valid index\n";
        return 0;
    }
    for(int i=d;i<s;i++)
    {
        arr[i-1]=arr[i];

    }
    s--;
    cout<<"The array after deletion\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int s,d;
    cout<<"Enter the size of the array\n";
    cin>>s;
    cout<<"Enter the vlaues in the array\n";
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index to be deleted\n";
    cin>>d;
    del(arr,s,d);
    return 0;
}