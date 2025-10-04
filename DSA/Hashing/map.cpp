#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    m["kanak"]=99;
    m["vanshika"]=98;
    m["gargi"]=97;
    m.insert({"Prem",96});
    cout<<m["Prem"]<<endl;
    for(auto x:m)
    {
        cout<<x.first<<" , "<<x.second<<endl;
    }
    return 0;
}