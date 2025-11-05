#include<iostream>
using namespace std;
int summ(int arr[],int n)
{
    if(n==0) return 0;
    int sum=arr[0]+summ(arr+1,n-1);
    return sum;
}
int main()
{
    int arr[5]={2,4,9,9,9};
    cout<<summ(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}