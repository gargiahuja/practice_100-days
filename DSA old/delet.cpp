#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    int len=sizeof(arr)/sizeof(arr[0]);
    int arr1[len-1];
    cout<<"enter the index ";
    int index;
    cin>>index;
    for(int i=0;i<len;i++)
    {
        if(i<index)
        {
            arr1[i]=arr[i];
        }
        else if(i>=index)
        {
            arr1[i]=arr[i+1];
        }
    }
    for(int i=0;i<len-1;i++)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}