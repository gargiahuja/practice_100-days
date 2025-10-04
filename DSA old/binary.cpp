#include<iostream>
using namespace std;
void binarysearch(int arr[],int size,int k)
{
    int mid;
    int low=0;
    int high=size-1;
    mid=(low+high)/2;
    while(high>low)
    {
        if(arr[mid]==k)
    {
        cout<<"congratulations you have found the value you were searching for at "<<mid<<" th\n";
    }
    else if(arr[mid]>k)
    {
        high=mid-1;
    }
    else if(arr[mid]<k)
    {
        low=mid+1;
    }
    }   
}
int main()
{
    int size,arr[size],k;
    cout<<"enter the size of array you would like \n";
    cin>>size;
    cout<<"enter the value you need to saerch \n";
    cin>>k;
    for(int i=0;i++;i<size)
    {
        cin>>arr[i];
    }
    binarysearch(arr,size,k);
    return 0;
}
 