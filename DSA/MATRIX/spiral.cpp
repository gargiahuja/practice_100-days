#include<iostream>
using namespace std;
void spiral(int **arr,int m,int n)
{
    int T=0,R=n-1,B=m-1,L=0;
    for(int i=T;i<R;i++)
    {
        cout<<arr[T][i]<<" ";
    }
    T++;
    for(int i=L;i<B;i++)
    {
        cout<<arr[i][B]<<" ";
    }
    R--;
    for(int i=R+1;i>=L;i--)
    {
        cout<<arr[B][i]<<" ";
    }
    B--;
    for(int i=B+1;i>=T;i--)
    {
        cout<<arr[i][L]<<" ";
    }
    L++;

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
    arr=new int*[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    spiral(arr,m,n);
    return 0;
}