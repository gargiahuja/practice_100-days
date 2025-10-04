#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"you are in class A constructor\n";
    }
    ~A(){
        cout<<"haha\n";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"you are in class B constructor\n";
    }
};
class D:public A
{
    public:
    D()
    {
        cout<<"you are in class D constructor\n";
    }
};

class C:public B, public D
{
    public:
    C()
    {
        cout<<"you are in class C constructor\n";
    }
};
int main()
{
    C C;
    return 0;
}