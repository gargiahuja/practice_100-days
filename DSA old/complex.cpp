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
        print();
    }
    void add(complex o,complex t)
    {
        a=o.a+t.a;
        b=o.b+t.b;
        print();
    }
    void print()
    {
        
        cout<<a<<" + "<<b<<" i \n";
    }
}; 
int main()
{
    complex o,t,z;
    o.set(1,2);

    t.set(2,1);
   
    cout<<"the sum of complex number is\n ";
    z.add(o,t);

    return 0;
}