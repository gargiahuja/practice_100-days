#include<iostream>
using namespace std;
void fillLPS(string str,int lps[])
{
    lps[0]=0;
    int n=str.length(),len=0;
    int i=1;
    while(i<n)
    {
        if(str[i]==str[len])
        {
            lps[i]=len+1;
            len++;
            i++;
        }
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;
            }
            else
            {
                len=lps[len-1];
            }
        }
    }
    for(int i=0;i<str.length();i++)
    {
        cout<<lps[i]<<" ";
    }
}
int main()
{
    string text,pat;
    cout<<"Enter the Text: ";
    cin>>text;
    int lps[text.length()];
    for(int i=0;i<text.length();i++)
    {
        lps[i]=0;
    }
    fillLPS(text,lps);
    return 0;
}