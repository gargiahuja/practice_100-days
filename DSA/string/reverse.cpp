#include<iostream>
using namespace std;
void reverse(string s[],int l,int h)
{
    while(l<=h)
    {
        swap(s[l],s[h]);
        l++;
        h--;
    }
}
void ordering(char s[],int n)
{
    int start=0;
    for(int end=0;end<n;end++)
    {
        if(s[end]==' ')
        {reverse(s,start,end-1);
        start=end+1;}
    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
}
int main()
{
    return 0;
}