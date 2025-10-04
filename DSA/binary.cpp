#include<iostream>
using namespace std;
void d_to_b(int n)
{
    if(n==0)
    {
        return;
    }
    d_to_b(n/2);
    cout<<n%2;
}
int main()
{
    int n;
    cin>>n;
    d_to_b(n);
    return 0;
}