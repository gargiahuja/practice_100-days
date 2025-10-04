#include<iostream>
using namespace std;
int sumof(int arr[],int n,int k)
{
    int sum=0;
    int j=0,i=0;
        while(sum<k)
        {
            sum+=arr[i];
            i++;
        }
        if(sum==k)
        {
            return 1;
        }
        while(sum>k)
        {
            sum=sum-arr[j];
            j++;
        }
        if((i==n-1)&&(sum!=k))
        {
            return 0;
        }
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
    int k;
    cout<<"enter the sum you need to find\n";
    cin>>k;
    cout<<sumof(arr,n,k);
    return 0;
}