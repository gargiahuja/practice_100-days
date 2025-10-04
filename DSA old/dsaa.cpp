#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,50}; 
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<len<<endl;
    int arr1[len+1];
    int key,index;
    cout<<"enter the index and key\n";
    cin>>index;
    cout<<endl;
    cin>>key;
    for(int i=0;i<len+1;i++)
    {
        if(i<index)
        {
            arr1[i]=arr[i];
        }
        else if(i==index)
        {
            arr1[i]=key;
        }
        else
        {
            arr1[i]=arr[i-1];
        }
    }
    for(int i=0;i<len+1;i++)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}