#include<iostream>
using namespace std;
int a=5;
int main()
{
    int a=10;
    cout<<"value of local a is "<<a;
    cout<<"value of global a is "<<::a;
}