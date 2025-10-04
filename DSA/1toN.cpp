#include<iostream>
using namespace std;
void _1toN(int n)
{
    if(n==0)
    return;
    _1toN(n-1);
    cout<<n<<" ";
}
int main()
{
    int n=4;
    _1toN(n);
    return 0;
}