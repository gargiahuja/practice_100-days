#include<iostream>
using namespace std;
int getsum(int arr[],int n,int l,int r)
{
    int summ,prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    return prefix[r]-prefix[l-1];
    if(l==0)
    {
        return prefix[r];
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
    int l,r;
    cout<<"enter the left and right of the array\n";
    cin>>l>>r;
    cout<<getsum(arr,n,l,r);
    return 0;
}