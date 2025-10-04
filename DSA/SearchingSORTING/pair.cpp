#include<iostream>
using namespace std;
bool pairr(int arr[],int n,int sum)
{
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[start]+arr[end]==sum)
        {
            return true;
        }
        else if(arr[start]+arr[end]>sum)
        {
            end++;
        }
        else if(arr[start]+arr[end]<sum)
        {
            start++;
        }
    }
    return false;
}
int main()
{
    int n,sum;;
    cout<<"Enter the size of the element\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum you want to find the pair of\n";
    cin>>sum;
    cout<<pairr(arr,n,sum);
    return 0;
}
