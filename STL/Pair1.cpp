#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p_array[3];
    for(int i=0;i<3;i++)
    {
        cin>>p_array[i].first>>p_array[i].second;
    }
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<"\n";
    }
    return 0;
}