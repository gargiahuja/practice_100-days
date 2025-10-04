#include<iostream>
#include<map>
using namespace std;
map <string,int> mp;
int solve(string s,int i,int j,bool istrue)
{
    if(i>j)
    {
        return 0;
    }
    if(i==j)
    {
        if(istrue==true)
        {
            return s[i]=='T';
        }
        else
        {
            return s[i]=='F';
        }
    }
    string temp=to_string(i);
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(istrue));
    int ans=0;
    if(mp.find(temp)!=mp.end())
    {
        return mp[temp];
    }
    for (int k = i + 1; k < j; k = k + 2)
    {
        int lt = solve(s, i, k - 1, true);
        int lf = solve(s, i, k - 1, false);
        int rt = solve(s, k + 1, j, true);
        int rf = solve(s, k + 1, j, false);
        if (s[k] == '|')
        {
            if (istrue == true)
            {
                ans = ans + lt * rt + lt * rf + rt * lf;
            }
            else
            {
                ans = ans + lf * rf;
            }
        }
        else if (s[k] == '&')
        {
            if (istrue == true)
            {
                ans = ans + lt * rt;
            }
            else
            {
                ans = ans + lt * rf + lf * rt + lf * rf;
            }
        }
        else if (s[k] == '^')
        {
            if (istrue == true)
            {
                ans = ans + lt * rf + lf * rt;
            }
            else
            {
                ans = ans + rt + lt + rf * lf;
            }
        }
    }
    return mp[temp]=ans;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<solve(s,0,s.length()-1,true);
    return 0;
}