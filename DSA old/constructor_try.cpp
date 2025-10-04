#include<iostream>
using namespace std;
class example
{
    int a;
    float b;
    public:
    example()
    {}
    // example(int x,int y)
    // {
    //     a=x;
    //     b=y;
    // }
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
    class s;
    int c;
    float d;
    cin>>c;
    cin>>d;
    class s1(c,d);
    s1.print();
    return 0;
}