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
        int l=1;
        int c=1;
        int m=1;
            while(k>0)
            {
                cout<<" ";
                k--;
            }
            while(l<=i)
            {
                cout<<c++;
                
                l++;
            }
            c = i - 1;
            while(m<i)
            {
                
                cout<<c--;
                m++;
            }
        cout<<endl;
        i++;
    }
    return 0;
}