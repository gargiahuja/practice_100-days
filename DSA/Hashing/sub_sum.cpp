#include<iostream>
#include<unordered_set>
using namespace std;
bool subsum(int arr[],int n,int sum)
{
    unordered_set<int>s;
    int summ=0;
    for(int i=0;i<n;i++)
    {
        summ+=arr[i];
        if (s.find(summ - sum) != s.end())
        {
            return true;
        }

        s.insert(summ);
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
    int sum;
    cout<<"SUM: ";
    cin>>sum;
    cout<<subsum(arr,n,sum);
    
    return 0;
}