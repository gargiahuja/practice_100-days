#include<iostream>
using namespace std;
int d = 256;
int q = 101;
void RBsearch(string pat,string text)
{
    int n=text.length();
    int m=pat.length();
    int p=0,t=0,h=1;
    for(int i=1;i<m;i++)
    {
        h=(h*d)%q;
    }
    for(int i=0;i<m;i++)
    {
        p=(p*d+pat[i])%q;
        t=(t*d+text[i])%q;
    }
    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            bool flag=true;
            for(int j=0;j<m;j++)
            {
                if(pat[j]!=text[i+j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {
                cout<<i<<" ";
            }
        }
        if(i<n-m)
        {
            t=(d*(t-text[i]*h)+text[i+m])%q;
            if(t<0)
            {
                t=t+q;
            }
        }
    }
}
int main()
{
    string text,pat;
    cout<<"Enter the Text: ";
    cin>>text;
    cout<<"Enter the pattern: ";
    cin>>pat;
    RBsearch(pat,text);
    return 0;
}