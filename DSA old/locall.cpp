#include<iostream>
using namespace std;
int a=5;
int main()
{
    int a=10;
    cout<<"value of local a is "<<a<<endl;
    cout<<"value of global a is "<<::a;
}