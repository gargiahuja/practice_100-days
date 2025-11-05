#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter Row: ";
    cin>>row;
    int** arr=new int* [row];
    for(int i=0;i<row;i++)
    {
        int col;
        cout<<"Enter Col: ";
        cin>>col;
        arr[i]=new int [col];
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Your Jaggered array: ";
    for(int i=0;i<row;i++)
    {
        int j=0;
        while(arr[i][j])
        {
            cout<<arr[i][j++]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}