#include<iostream>
#include <limits.h>
using namespace std;
int solve(int arr[],int n,int i,int j)
{
    if(i>j)
    {
        return 0;
    }
    if(i==j)
    {
        return 0;
    }
    int temp_ans=INT_MAX;
    for(int k=i;k<j;k++)
    {
        temp_ans=min(solve(arr,n,i,k)+solve(arr,n,k+1,j)+(arr[i-1]*arr[k]*arr[j]),temp_ans);
    }
    return temp_ans;
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solve(arr,n,1,n-1);
    return 0;
}