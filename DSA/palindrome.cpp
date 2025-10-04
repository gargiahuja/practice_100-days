#include<iostream>
using namespace std;
int count(int a)
{
    int c=0;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    return c;
}
void check(int a,int countt)
{
    int x,temp=a;
    int N=0;
    for(int i=countt;a>0;i--)
    {
        x=a%10;
        a=a/10;
        N=N*10+x;
    }
    if(temp==N)
    {
        cout<<"palindrome\n";
    }
    else{
        cout<<"not palindrome\n";
    }
}
int main()
{
    int countt,a;
    cin>>a;
    countt=count(a);
    check(a,countt);
    return 0;
}