#include<iostream>
using namespace std;
void subset(string a,string current=" ",int i=0)
{
    if(i==a.length())
    {
        cout<<a;
        return;
    }
    subset(a,current,i);
    subset(a,current+a[i],i+1);
}
int main()
{
    string a="ABC";
    subset(a);
    return 0;
}