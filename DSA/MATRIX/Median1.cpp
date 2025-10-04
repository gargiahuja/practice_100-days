#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void median(int **arr,int R,int C)
{
    vector <int>v;
    int k=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[(R*C)/2];
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
    median(arr,R,C);
    return 0;
}