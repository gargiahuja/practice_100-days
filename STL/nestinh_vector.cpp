#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// void printvec(vector<pair<int,int>>&v)
// {
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<"{"<<v[i].first<<" , "<<v[i].second<<"}";
//     }
//     cout<<endl;
//     v.push_back({1,5});
// }
// void printvec(vector<int>&v)
// {
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
void printvec(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // vector<pair<int,int>>v;
    // int n;
    // cout<<"N: ";
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int a,b;
    //     cin>>a>>b;
    //     v.push_back({a,b});
    // }
    // printvec(v);
    // printvec(v);
    //vector<int>v[10];
    // int N;
    // cout<<"N: ";
    // cin>>N;
    // vector<int>v[N];
    // for(int i=0;i<N;i++)
    // {
    //     int n;
    //     cin>>n;
    //     for(int j=0;j<n;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v[i].push_back(x);
    //     }
    //     cout<<endl;

    // }
    // for(int i=0;i<N;i++)
    // {
    //     printvec(v[i]);
    // }
    int N;
    cout<<"N: ";
    cin>>N;
    vector<vector<int>>v;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        cout<<endl;
        v.push_back(temp);
    }
    for(int i=0;i<N;i++)
    {
        printvec(v[i]);
    }

}