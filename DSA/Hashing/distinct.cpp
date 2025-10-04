#include<iostream>
#include<unordered_set>
using namespace std;
int distinct(int arr[],int n,int k)
{
    for(int i=0;i<n-k+1;i++)
    {
        unordered_set<int>s;
        for(int j=i;j<i+k;j++)
        {
            s.insert(arr[j]);
        }
        cout<<s.size()<<" ";
    }
}
int main()
{
    int n;
    cout<<"SIZE: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"WINDOW SIZE: ";
    cin>>k;
    distinct(arr,n,k);
    return 0;
}