#include<iostream>
using namespace std;
int main()
{
    char ch[6]="abcde";
    cout<<"1 "<<ch<<endl;
    cout<<"2 "<<*ch<<endl;
    cout<<"3 "<<*&ch<<endl;
    cout<<"4 "<<&ch<<endl;
    cout<<"5 "<<&ch[0]<<endl;
    
    return 0;
}