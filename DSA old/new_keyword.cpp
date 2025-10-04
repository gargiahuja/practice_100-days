#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int* ptr=&a;
    cout<<ptr<<endl;
    delete ptr;
    cout<<ptr<<endl;
    int b;
    cin>>b;
    int* t=new int(b);
    cout<<t<<endl;
    delete t;
    cout<<t;
    return 0;
}