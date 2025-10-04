#include<iostream>
#include<string>    
using namespace std;
int longest(string X,string Y,int n,int m)
{
    if(n==0||m==0)
    {
        return 0;
    }
    if(X[n-1]==Y[m-1])
    {
        return 1+longest(X,Y,n-1,m-1);
    }
    else
    {
        return max(longest(X,Y,n-1,m),longest(X,Y,n,m-1));
    }
}

int main()
{
    int n,m;
    cout<<"Enter the size of the string you want:\n";
    cin>>n;
    cin>>m;
    string X,Y;
    cout<<"Enter the string X: \n";
    cin>>X;
    cin>>Y;
    cout<<longest(X,Y,n,m);
    return 0;
}