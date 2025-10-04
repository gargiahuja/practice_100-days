#include<iostream>
using namespace std;
void search(int **arr,int m,int n,int k)
{
    int i=0,j=n-1;
    while((i<=m-1)&&(j>=0))
    {
        if(arr[i][j]==k)
        {
            cout<<"Found at ("<<i<<","<<j<<")";
            return;
        }
        else if(arr[i][j]<k)
        {
            i++;
        }
        else 
        {
            j--;
        }
    }
    cout<<"Not found ";
}
int main()
{
    int **arr;
    int R;
    cout<<"R: ";
    cin>>R;
    int C;
    cout<<"C: ";
    cin>>C;
    arr=new int *[R];
    for(int i=0;i<R;i++)
    {
        arr[i]=new int [C];
        for(int j=0;j<C;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k;
    cout<<"Enter the element you need to find: ";
    cin>>k;
    search(arr,R,C,k);
    return 0;
}