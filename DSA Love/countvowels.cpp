#include<iostream>
using namespace std;
string vowel(string s)
{
    string st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            st.push_back(s[i]);
        }

    }
    return st;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<vowel(s);
    return 0;
}