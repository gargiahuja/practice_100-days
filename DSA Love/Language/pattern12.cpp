#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int k=n-i;
        while(k>0)
        {
            cout<<" ";
            k--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}