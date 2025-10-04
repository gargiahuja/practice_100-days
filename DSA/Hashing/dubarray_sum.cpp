#include<iostream>
#include<unordered_set>
using namespace std;
bool subarray(int arr[],int n)
{
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(s.find(sum)!=s.end())
        {
            return true;
        }
        if(sum==0)
        {
            return true;
        }
        s.insert(sum);
    }
    return false;
}
int main()
{
    int n;
    cout<<"SIZE: ";
    cin>>n;
    int arr[n];
    cout<<"ENTER: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(subarray(arr,n))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}