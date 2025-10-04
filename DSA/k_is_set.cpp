#include<iostream>
using namespace std;
void kth_bit(int n,int k)
{
    if(n&(1<<(k-1))!=0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    kth_bit(n,k);
    return 0;
}