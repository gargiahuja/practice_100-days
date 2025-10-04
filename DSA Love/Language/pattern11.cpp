#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int k=0;
        int j=n-i+1;
        while(k<i-1)
        {
            cout<<" ";
            k++;
        }
        while(j>0)
        {
            cout<<"*";
            j--;
        }
        i++;
        cout<<endl;
    }

    return 0;
}