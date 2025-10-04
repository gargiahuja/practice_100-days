#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucket(int arr[],int n,int k)
{
    int mn=0;
    for (int i=0;i<n;i++)
    {
        if(mn<arr[i])
        {
            mn=arr[i];
        }
    }
    mn++;
    vector<int>bkt[k];
    for(int i=0;i<n;i++)
    {
        int bi=k*arr[i]/mn;
        bkt[bi].push_back(arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        sort(bkt[i].begin(),bkt[i].end());
    }
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        {        
            arr[index]=bkt[i][j];
            index++;
        }    
    }
}
int main()
{
    int n;
    cout<<"SIZE: ";
    cin>>n;
    int arr[n];
    cout<<"FILL ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"K: ";
    cin>>k;
    bucket(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}