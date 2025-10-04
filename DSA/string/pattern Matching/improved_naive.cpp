#include<iostream>
using namespace std;
void match(string s,string p)
{
    int n=s.length();
    int m=p.length();
    for(int i=0;i<=n-m;)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(s[i+j]!=p[j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
        if(j==0)
        {
            i++;
        }
        else{i=i+j;}
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