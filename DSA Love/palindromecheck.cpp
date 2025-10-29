#include<iostream>
using namespace std;
bool check(string& s)
{
    int i=0,e=s.length()-1;
    while(i<e)
    {
        if(s[i]!=s[e]) return false;
        i++;
        e--;
    }
    return true;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<check(s);
    return 0;
}