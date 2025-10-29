#include<iostream>
using namespace std;
void reverse(string &str,int s,int e)
{
    while(s<=e)
    {
        swap(str[s++],str[e--]);
    }
}
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    reverse(str,0,str.length()-1);
    for(int i=0;i<str.length();i++)
    {
        int s,e;
        if(i==0) {s=i;}
        if(str[i]==' ')
        {
            e=i-1;
            reverse(str,s,e);
            s=e+2;
        }
        if(i==str.length()-1)
        {
            e=i;
            reverse(str,s,e);
        }
    }
    cout<<str;
    return 0;
}