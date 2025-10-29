#include<iostream>
using namespace std;
char getmax(string str)
{
    int arr[26]={0};
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if((ch>='A')&&(ch<='Z'))
        {
            int n=ch-'A';
            arr[n]++;
        }
        if((ch>='a')&&(ch<='z'))
        {
            int n=ch-'a';
            arr[n]++;
        }
    }
    int m=0;
    int j=0;
    for(int i=0;i<26;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
            j=i;
        }
    }
    return 'a'+j;
}
int main()
{
    string str;
    cin>>str;
    cout<<getmax(str);
    return 0;
}