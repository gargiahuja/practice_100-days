#include<iostream>
using namespace std;
string reversee(string& st)
{
    int s=0,e=st.length()-1;
    while(s<e)
    {
        swap(st[s],st[e]);
        s++;
        e--;
    }
    return st;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<reversee(s);
    return 0;
}