#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>symbols={{'{',-1},{'(',-2},{'[',-3},{'}',1},{')',2},{']',3}};
string balanced(string s)
{
    stack<char>st;
    for(char bracket:s)
    {
        if(symbols[bracket]<0)
        {
            st.push(bracket);
        }else{
            if(st.empty())
            {
                return "NO";
            }
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket]!=0)
            {
                return "NO";
            }
        }
    }
    if(s.empty())
    {return "YES";}
    return "NO";
}
int main()
{
    string s;
    cin>>s;
    cout<<balanced(s);
    return 0;
}