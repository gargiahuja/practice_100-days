#include<iostream>
#include<unordered_set>
using namespace std;
int eq_01(int arr[],int n)
{
    unordered_set<int>s;
    int pre_sum;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=-1;
        }
        pre_sum+=arr[i];
        if(pre_sum)
        {
            
        }
    }
    
}
int main()
{

    return 0;
}