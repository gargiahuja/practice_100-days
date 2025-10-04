#include<iostream>
using namespace std;
void search(int **arr,int m,int n,int k)
{
    int T=0,R=n-1,L=0,B=m-1;
    while(T<=B&&L<=R)
    {
        int M=(T+B)/2;
        if(arr[M][T]==k)
        {
            cout<<"Found at "<<"("<<M<<","<<T<<")";
            return;
        }
        else if(arr[M][T]>k)
        {
            B=M-1;
        }
        else if(arr[M][T]<k)
        {
            T=M+1;
        }
        M=(R+L)/2;
        if(arr[L][M]==k)
        {
            cout<<"Found at "<<"("<<L<<","<<M<<")";
            return;
        }
        else if(arr[L][M]>k)
        {
            R=M-1;
        }
        else if(arr[L][M]<k)
        {
            L=M+1;
        }
    }
    cout<<"Not found.";
}
int main()
{
    int **arr;
    int m;
    cout<<"M: ";
    cin>>m;
    int n;
    cout<<"N: ";
    cin>>n;
    arr=new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k;
    cout<<"enter the element yo want to search: ";
    cin>>k;
    search(arr,m,n,k);
    return 0;
}