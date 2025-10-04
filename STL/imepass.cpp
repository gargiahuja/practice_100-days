#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void funn(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        arr[i]++;
    }
    return;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    funn(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}