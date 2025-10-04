#include<iostream>
using namespace std;
bool triplets(int arr[],int n,int sum)
{
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[start]+arr[end]>sum)
        {
            end--;
        }
        else if(arr[start]+arr[end]<sum)
        {
            for(int i=start+1;i<end;i++)
            {
                if(arr[start]+arr[end]+arr[i]==sum)
                {
                    return true;
                }
                start++;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the sm you want to find\n";
    cin>>sum;
    cout<<triplets(arr,n,sum);
    return 0;
}