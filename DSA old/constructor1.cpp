#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(void)
    {
        a=10;
        b=20;
    }
    void print();
};
void complex:: print()
{
    cout<<a<<" + "<<b<<" i \n";
}
int main()
{
    complex c;
    c.print();
    return 0;
}