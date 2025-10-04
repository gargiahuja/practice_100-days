#include<iostream>
using namespace std;
void match(string s,string p)
{
    int m=s.length();
    int n=p.length();
    for(int i=0;i<=m-n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(s[i+j]!=p[j])
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    string s,p;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Enter the pattern: ";
    cin>>p;
    match(s,p);
    return 0;
}