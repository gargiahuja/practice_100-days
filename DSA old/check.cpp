#include<iostream>
using namespace std;
class example
{
    int a;
    float b;
    public:
    example()
    {}
    example(int x,int y)
    {
        a=x;
        b=y;
    }
    example(int,float);
    void print(void)
    {
        cout<<a<<endl<<b;
    }
};
example::example(int x,float y)
    {
        a=x;
        b=y;
    }
int main()
{
    example s;
    int c;
    float d;
    cin>>c;
    cin>>d;
    example t(c,d);
    t.print();
    return 0;
}