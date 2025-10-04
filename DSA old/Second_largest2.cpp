#include<iostream>
using namespace std;
int secondlargest(int arr[],int n)
{
    int l=0,s=-1;
    for(int i=1;i<n;i++)
    {
        
        if(arr[i]>arr[l])
        {
            s=l;
            l=i;
        }
        if(arr[i]!=arr[l])
        {
            if(s==-1||arr[i]>arr[s])
            {
                s=i;
            }
        }
    }
    return s;
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
    cout<<secondlargest(arr,n);
    return 0;
}