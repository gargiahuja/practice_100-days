#include<iostream>
using namespace std;
bool givesum(int arr[],int n,int sum)
{
    int j=0,s=0,i=0;
    while(s<sum&&i<n)
    {
        s=s+arr[i];
        i++;
    }
    while(s>sum&&i<n)
    {
        s=s-arr[j];
        j++;
    }
    if(s==sum)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"enter the sum you need to find in the array\n";
    cin>>sum;
    cout<<givesum(arr,n,sum);
    return 0;
}