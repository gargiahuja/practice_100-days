#include<iostream>
#include<unordered_set>
using namespace std;
int consecutive(int arr[],int n)
{
    int res=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            int curr=1;

            while(s.find(arr[i]+curr)!=s.end())
            {
                curr++;
            }
            res=max(res,curr);            
        }
    }
    return res;
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
    cout<<consecutive(arr,n);
    return 0;
}