#include<iostream>
using namespace std;
bool subsequence(string s1,string s2)
{
    int l1=0,h1=s1.length();
    int l2=0,h2=s2.length();
    while(l1!=h1&&l2!=h2)
    {
        if(s2[l2]==s1[l1])
        {
            l2++;
            l1++;
            if(l2==h2)
            {
                return 1;
            }
        }
        else
        {
            l1++;
        }
    }
    return 0;
}
int main()
{
    string s1,s2;
    cout<<"Enter s1 ";
    cin>>s1;
    cout<<"Enter s2 ";
    cin>>s2;
    cout<<subsequence(s1,s2);
    return 0;
}