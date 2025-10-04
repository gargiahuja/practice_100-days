#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int>v;
    // vector<int>::iterator it;
    // it=v.begin();
    // v.push_back(10);
    // cout<<(*v.begin());
    // vector<int>v={2,3,5,6,7};
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // vector<int>::iterator it;
    // it=v.begin();
    // cout<<*it<<" ";
    // cout<<*it+1<<" ";
    // cout<<endl;
    // for(it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it+5<<" ";
    // }
    // vector<int>v;
    // for(int i=0;i<5;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    vector<pair<int,int>>v={{1,2},{3,4}};
    vector<pair<int,int>>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it).first<<" "<<it->second<<endl;
    }
    it=v.begin();
    // cout<<(*it);
    for(pair<int,int> value:v)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}