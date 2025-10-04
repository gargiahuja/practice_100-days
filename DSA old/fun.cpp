#include<iostream>
using namespace std;
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);
int main()
{
    char op;
    int a,b;
    cout<<"welcome to the real world calculator"<<endl;
    cin>>a>>op>>b;
    cout<<endl;
  //  cout<<a<<op<<b;
    if(op=='+')
    {
        int sum;
        sum=add(a,b);
        cout<<sum<<endl;
    }
    if(op=='-')
    {
        int sub;
        sub=subtract(a,b);
        cout<<sub<<endl;
    }
    if(op=='*')
    {
        int mul;
        mul=multiply(a,b);
        cout<<mul<<endl;
    }
    if(op=='%')
    {
        int div;
        div=divide(a,b);
        cout<<div<<endl;
    }
}
int add(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
int subtract(int a,int b)
{
    int s;
    s=a-b;
    return s;
}
int multiply(int a,int b)
{
    int s;
    s=a*b;
    return s;
}
int divide(int a,int b)
{
    int s;
    s=a%b;
    return s;
}