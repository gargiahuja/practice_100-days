#include<iostream>
#include<cstring>
#include<map>
using namespace std;
map<string,int>mp;
bool solve(string a,string b)
{
    if(a.compare(b)==0)
    {
        return true;
    }
    if(a.length()<=1)
    {
        return false;
    }
    bool flag=false;
    int n=a.length();
    string key=a;
    key.push_back(' ');
    key.append(b);
    if(mp.find(key)!=mp.end())
    {
        return mp[key];
    }
    for(int i=1;i<n;i++)
    {bool cond1=solve(a.substr(0,i),b.substr(0,i))&&solve(a.substr(i,n-i),b.substr(i,n-i));
    bool cond2=solve(a.substr(0,i),b.substr(n-i,i))&&solve(a.substr(i,n-i),b.substr(0,n-i));
    if(cond1||cond2)
    {
        flag=true;
    }}
    return mp[key]=flag;
}
int main()
{
    string a,b;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<solve(a,b);
    return 0;
}