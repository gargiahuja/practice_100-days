#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cin>>a;
    int tmp=a;
    while(a!=0)
    {
        count++;
        a/=10;
    }
    cout<<"number of integers in "<<tmp<<" = "<<count;
    return 0;
}