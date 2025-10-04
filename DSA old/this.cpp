#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A& getdata(int a)
    {
        this-> a= a;
        return *this;
    }
    void setdata()
    {
        cout<<"the value is "<<a<<endl;
    }
};
int main()
{
    A obj;
    A* p = &obj;
    int a;
    cin>>a;
    cout<<"\n";
    p->getdata(a).setdata();
    return 0;
}