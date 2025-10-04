#include<iostream>
using namespace std;
int largestt(int arr[],int n)
{
    int l=0,x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
            x=i;
        }
    }
    return x;
}
int second_largest(int arr[],int n)
{
    int largest=largestt(arr,n);
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest)
        {
            if(res==-1)
            {
                res=i;
            }
            else if(arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<second_largest(arr,n);
    return 0;
}