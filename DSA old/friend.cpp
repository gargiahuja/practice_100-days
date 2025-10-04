#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    friend complex sum(complex o,complex t);
    void print()
    {
        cout<<"your number is "<<a<<" + "<<b<<" i\n";
    }
};
complex sum(complex o,complex t)
{
    complex z;
    z.set((o.a+t.a),(o.b+t.b));
    return z;
}
int main()
{
    complex c1,c2,summ;
    c1.set(1,2);
    c1.print();

    c2.set(2,1);
    c2.print();

    summ=sum(c1,c2);
    summ.print();
    return 0;
}