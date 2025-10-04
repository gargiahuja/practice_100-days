#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    Test(int i,int j):a(i)
    {
        a=88;
        b=j;
        cout<<"constructor is executed\n";
        cout<<a<<"\n"<<b;
    }
};
int main()
{
    Test t(3,4);
    return 0;
}