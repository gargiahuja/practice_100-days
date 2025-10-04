#include<iostream>
using namespace std;
void overlapping(int arr[][2],int n)
{
    int temp[2][2];
    temp[0][0]=arr[0][0];
    temp[0][1]=arr[0][1];
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i][0]<temp[j][1])
        {
            temp[j][1]=arr[i][1];
        }
        else
        {
            j++;
            temp[j][0]=arr[i][0];
            temp[j][1]=arr[i][1];
        }
    }
    for(int i=0;i<2;i++)
    {
        cout<<temp[i][0]<<","<<temp[i][1]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of intervals:\n";
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    overlapping(arr,n);
    return 0;
}