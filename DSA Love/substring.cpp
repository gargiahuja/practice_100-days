#include<iostream>
#include<vector>
#include<set>
using namespace std;
int countExactKDistinct(string s,int k)
{
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        set<char>st;
        for(int j=i;j<s.length();j++)
        {
            st.insert(s[j]);
            if(st.size()==k)c++;
            else if(st.size()>k)break;
        }
    }
    return c;
}
int main()
{
    string s = "pqpqs";
    int k = 2;
    cout << countExactKDistinct(s, k);
    return 0;
}