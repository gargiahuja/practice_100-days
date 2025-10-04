#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4};
    int a;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n+1;n++)
    {
        a=a^i;
    }
    for(int i=1;i<n;n++)
    {
        
    }
    cout<<a<<endl;
    return 0;
}