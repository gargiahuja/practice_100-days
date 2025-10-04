#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int,int);
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
complex::complex(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    complex t(4,6);
    complex x=complex(2,2);
    int c,r;
    cin>>c>>r;
    complex d(c,r);
    t.print();
    x.print();
    d.print();
    return 0;
}