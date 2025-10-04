#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printt(auto m)
{
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
}
int main()
{
    map<int,string> m;
    // m[1]="gargi";
    // m[2]="vidhi";
    // for(int i=1;i<=2;i++)
    // {
    //     cout<<m[i];
    // }
    m[5]="abced";
    m[1]="vcb";
    m[6]="mkn";
    m[3]="njg";
    printt(m);
    m.insert({8,"gargi"});
    m:make_pair(9,"vidhi");
    printt(m);
    auto it=m.find(3);
    cout<<(*m.find(3)).second;
    m.erase(it);
    printt(m);
    return 0;

} 