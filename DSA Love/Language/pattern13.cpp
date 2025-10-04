#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        int k=0;
        while(k<i-1)
        {
            cout<<" ";
            k++;
        }
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}