#include<iostream>
using namespace std;
void LCM(int a,int b)
{
    int mul;
    mul=a*b;
    int m=max(a,b);
    for(int i=m;i<=mul;i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            cout<<i<<"\n";
            break;
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    LCM(a,b);
    return 0;
}