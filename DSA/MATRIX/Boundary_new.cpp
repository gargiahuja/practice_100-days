#include<iostream>
using namespace std;
void bondary(int **arr,int R,int C)
{
    if(R==1)
    {
        for(int i=0;i<C;i++)
        {
            cout<<arr[0][i]<<" ";
        }
    }
    if(C==1)
    {
        for(int i=0;i<R;i++)
        {
            cout<<arr[i][0]<<" ";
        }
    }
    else{
        for(int i=0;i<C;i++)
        {
            cout<<arr[0][i]<<" ";
        }
        for(int i=1;i<R;i++)
        cout<<arr[i][C-1]<<" ";
        for(int i=C-2;i>=0;i--)
        cout<<arr[R-1][i]<<" ";
        for(int i=R-2;i>=1;i--)
        cout<<arr[i][0]<<" ";
    }
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
    bondary(arr,R,C);
    return 0;
}