#include<iostream>
#include<unordered_map>
using namespace std;
void freq(int arr[],int n)
{
    unordered_map<int,int>h;
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    for(auto x:h)
    {
        cout<<x.first<<" "<<x.second<<endl;
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
    freq(arr,n);
    return 0;
}