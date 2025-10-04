#include<iostream>
#include<cstring>
using namespace std;
bool check(string a,string b)
{
    if(a.compare(b)==0)
    {
        return true;
    }
    int n=a.length();
    bool flag=false;
    for(int i=1;i<n;i++)
    {
        bool cond1=(check(a.substr(0,i),b.substr(0,i)))&&(check(a.substr(i,n-i),b.substr(i,n-i)));
        bool cond2=(check(a.substr(0,i),b.substr(n-i,i)))&&(check(a.substr(i,n-i),b.substr(0,n-i)));
        if(cond1||cond2)
        {
            flag=true;
            break;
        }
    }
    return flag;
}
int main()
{
    string a,b;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    if(a.length()==b.length())
    {
        cout<<check(a,b);
    }
    if(a.length()<=0)
    {
        cout<<"True\n";
    }
    return 0;
}