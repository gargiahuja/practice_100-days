#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int num=5;
    int *ptr=&num;
    cout<<"Value of num is: "<<num<<endl;
    cout<<"Value of Address: "<<ptr<<endl;
    cout<<"Value of Address: "<<&num<<endl;
    int *p=0;
    cout<<"Value of Address: "<<p<<endl;
    if(p==0)
    {
        cout<<"Segmentation fault."<<endl;
    }
    int *q=ptr;
    cout<<q<<endl;
    cout<<typeid(q).name()<<endl;

    int d=10;
    int t=*ptr+*q;
    cout<<t<<endl;
    cout<<(*ptr)++<<endl;
    cout<<(*ptr)++<<endl;
    
    int **f=&ptr;
    cout<<f<<endl;   
    cout<<(f+1)<<endl;
    cout<<**f<<endl;
    return 0;
}