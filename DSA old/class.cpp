#include<iostream>
using namespace std;
class nw
{
    private:
    int a,b;
    public:
    int c,d;
    void setdata(int a1,int b1,int c1,int d1);
    void getdata()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
    }
};
void nw::setdata(int a1,int b1,int c1,int d1)
{
    a=a1;
    b=b1;
    c=c1;
    d=d1;
}
int main()
{
    nw numbers;
    numbers.setdata(1,2,3,4);
    numbers.getdata();
    return 0;
}