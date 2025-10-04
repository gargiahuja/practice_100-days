#include<iostream>
#include<cstring>
using namespace std;
void counting(int arr[],int n,int k)
{
    int temp[k];
    memset(temp,0,sizeof(temp));
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]++;
    }
    for(int i=0;i<k;i++)
    {
        while(temp[i]!=0)
        {
            cout<<i<<" ";
            temp[i]--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elments in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    counting(arr,n,k);
    return 0;
}