#include<iostream>
using namespace std;
int leftmost(string str)
{
    for(int i=0;i<str.length();i++)
    {
        int flag=0;
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            return i;
        }
    }
}
int main()
{
    string str;
    cout<<"ENTER ";
    cin>>str;
    cout<<leftmost(str);
    return 0;
}