#include<iostream>
using namespace std;
bool prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int a;
    cin>>a;
    cout<<prime(a);
    return 0;
}