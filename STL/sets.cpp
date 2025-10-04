#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printt(set<string>&s)
{
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }
    cout<<endl;
}
int main()
{
    set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    printt(s);
    s.erase("abc");
    printt(s);
    return 0;
}