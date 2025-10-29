#include<iostream>
using namespace std;
void complement(long long int a)
{
    long long int mask;
    mask=0;
    long long int n=a;
    while(n!=0)
    {
        mask=(mask<<1)|1;
        n=n>>1;
    }
    cout<<int((~a) && mask);
}
int main()
{
    complement(111);
    
    return 0;
}