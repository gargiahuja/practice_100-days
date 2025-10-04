#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int k=n-i;
        while(j<=n)
        {
            while(k>0)
            {
                cout<<" ";
                k--;
                j++;
            }
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}