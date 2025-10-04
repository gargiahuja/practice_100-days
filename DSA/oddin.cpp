#include<iostream>
using namespace std;
void odd_appearing(int arr[],int n)
{
    int res1=0,res2=0,res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    res=res&~(res-1);
    for(int i=0;i<n;i++)
    {
        if(arr[i]&res!=0)
    {
        res1=res1^arr[i];
    }
    else{
        res2=res2^arr[i];
    }
    }
    cout<<res1<<endl;
    cout<<res2;
}
int main()
{
    int arr[]={3,4,3,4,5,4,4,6,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    odd_appearing(arr,n);
    return 0;
}