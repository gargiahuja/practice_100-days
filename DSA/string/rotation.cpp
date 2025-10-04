#include<iostream>
using namespace std;
void match(string s1,string s2)
{
    int n=s1.length();
    int iter=0;
    char temp;
    while(s1!=s2 && iter<n)
    {
        iter++;
        temp=s1[0];
        for(int i=1;i<n;i++)
        {
            s1[i-1]=s1[i];
        }
        s1[n-1]=temp;
        if(s1==s2)
        {
            cout<<" .Yes. ";
            return;
        }
    }
    cout<<" .NO. ";
    return;
}
int main()
{
    string s1,s2;
    cout<<"s1: ";
    cin>>s1;
    cout<<"s2: ";
    cin>>s2;
    match(s1,s2);
    return 0;
}