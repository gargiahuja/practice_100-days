#include<iostream>
#include<unordered_set>
using namespace std;
int countDistinct(int arr[],int n)
{
    unordered_set<int>a;
    for(int i=0;i<n;i++)
    {
        a.insert(arr[i]);
    }
    return a.size();
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<countDistinct(arr,n);
    return 0;
}