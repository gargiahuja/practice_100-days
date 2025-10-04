#include<iostream>
using namespace std;
class base
{
    int data1;
    public:
    int data2;
    void setdata(int);
    int getdata1();
    int getdata2();
};
void base::setdata(int a)
{
    data1=a;
    data2=20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived:public base
{
    int data3;
    public:
    void process();
    void display();
};
void derived::process()
{
    data3=data2*getdata1();
}
void derived::display()
{
    cout<<"value of data1 is "<<getdata1()<<endl;
    cout<<"value of data2 is "<<data2<<endl;
    cout<<"value of data3 is "<<data3<<endl;
}
int main()
{
    derived der;
    int a;
    cin>>a;
    der.setdata(a);
    der.process();
    der.display();
    return 0;
}