#include<iostream>
using namespace std;
int rod(int length[],int price[],int n,int N)
{
    int t[n+1][N+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<N+1;j++)
        {
            if(i==0)
            {
                t[i][j]=0;
            }
            if(j==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<N+1;j++)
        {
            if(length[i-1]<=j)
            {
                t[i][j]=max(price[i-1]+t[i][j-length[i-1]],t[i-1][j]);
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][N];
}
int main()
{
    int n,N;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    int length[n],price[n];
    cout<<"Enter the price with tha corresponding length: \n";
    for(int i=0;i<n;i++)
    {
        cin>>price[i]>>length[i];
    }
    cout<<"Enter the length of the rod: \n";
    cin>>N;
    cout<<"The maximum profit i can have is: \n";
    cout<<rod(length,price,n,N);
    return 0;
}