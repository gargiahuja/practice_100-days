#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printvec(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(11);
}
int main()
{
    vector<int>v(5);
    printvec(v);
    v.push_back(8);
    printvec(v);
    int i=0;
    //vector<int>v1(10,++i);
    vector<int>v1=v;
    v1.push_back(10);
    v.push_back(5);

    printvec(v1);
    printvec(v);
    return 0;
}