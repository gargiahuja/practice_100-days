#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
    int a;
    int b;
    public:
    int sum,product,division,sub;
    void getdatasim(int x,int y)
    {
        a=x;
        b=y;
    }
    void processdatasim()
    {
        sum=a+b;
        product=a*b;
        division=a/b;
        sub=a-b;
    }
    void displaydatasim()
    {
        cout<<a<<" + "<<b<<" = "<<sum<<endl;
        cout<<a<<" * "<<b<<" = "<<product<<endl;
        cout<<a<<" / "<<b<<" = "<<division<<endl;
        cout<<a<<" - "<<b<<" = "<<sub<<endl;
    }
};
class scientificcalculator
{
    int c,d;
   public:
   int square1,square2,squarrt1,squarrt2,cube1,cube2;
    void getdatasci(int x,int y)
    {
        c=x;
        d=y;
    } 
    void processdatasci()
    {
        square1=c*c;
        square2=d*d;
        cube1=c*c*c;
        cube2=d*d*d;
        squarrt1=sqrt(c);
        squarrt2=sqrt(d);
    }
    void setdatasci()
    {
        cout<<"square of "<<c<<" = "<<square1<<endl;
        cout<<"square of "<<d<<" = "<<square2<<endl;
        cout<<"cube of "<<c<<" = "<<cube1<<endl;
        cout<<"cube of "<<d<<" = "<<cube2<<endl;
        cout<<"square root of "<<c<<" = "<<squarrt1<<endl;
        cout<<"square root of "<<d<<" = "<<squarrt2<<endl;
    }
};
class hybrid:public simplecalculator,public scientificcalculator
{
    public:
    hybrid(int x,int y)
    {
        getdatasim(x,y);
        processdatasim();
        getdatasci(x,y);
        processdatasci();
    }
};
int main()
{
    int a,b;
    cout<<"enter the value of integers which you want to evaluate\n";
    cout<<"enter first integer"<<endl;
    cin>>a;
    cout<<"enter second integer"<<endl;
    cin>>b;
    hybrid t(a,b);
    t.displaydatasim();
    t.setdatasci();
    return 0;
}