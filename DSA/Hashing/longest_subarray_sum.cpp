#include<iostream>
#include<unordered_map>
using namespace std;
int maxlen(int arr[],int n,int sum)
{
    unordered_map<int,int>m;
    int pre_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==sum)
        {res=i+1;}
        if(m.find(pre_sum)==m.end())
        {m.insert({pre_sum,i});}
        if(m.find(pre_sum)!=m.end())
        {res=max(res,i-m[pre_sum]);}
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
    int sum;
    cout<<"SUM: ";
    cin>>sum;
    cout<<maxlen(arr,n,sum);
    return 0;
}