#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int sum;
    int a,b,c;
    cout<<"enter any two numbers"<<endl;
    cin>>a>>b;
    sum=add(a,b);
    cout<<sum<<endl;
    cout<<"enter three numbers"<<endl;
    cin>>a>>b>>c;
    sum=add(a,b,c);
    cout<<sum<<endl;
}
int add(int a,int b,int c)
{
    return(a+b+c);
}