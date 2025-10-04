#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // stack<int>s;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int a;
    //     cin>>a;
    //     s.push(a);
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    queue<string>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        q.push(s);
    }
    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<"\n";
        q.pop();
    }
    return 0;
}