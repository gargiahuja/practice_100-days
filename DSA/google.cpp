#include<iostream>
using namespace std;
void pairr(int arr[],int size,int sum)
{
    int start=0;
    int end=size-1;
    while(end>start)
    {
        if(arr[start]+arr[end]==sum)
        {
            cout<<"("<<arr[start]<<","<<arr[end]<<")";
            break;
        }
        else if(arr[start]+arr[end]<sum)
        {
            start++;
        }
        else if(arr[start]+arr[end]>sum)
        {
            end--;
        }
    }
}
int main()
{
    int arr[4]={1,2,4,4};
    int sum=8;
    int size=sizeof(arr)/sizeof(arr[0]);
    pairr(arr,size,sum);
    return 0;
}