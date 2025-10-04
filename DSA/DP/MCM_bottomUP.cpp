#include<iostream>
#include <cstring>
#include<climits>
using namespace std;
static int t[1001][1001];
int MCM(int arr[],int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    if(t[i][j]!=-1)
    {
        return t[i][j];
    }
    int mn=INT_MAX;
    for(int k=i;k<j;k++)
    {
        int temp_ans=MCM(arr,i,k)+MCM(arr,k+1,j)+(arr[i-1]*arr[j]*arr[k]);
        if(temp_ans<mn)
        {
            mn=temp_ans;
        }
    }
    return t[i][j]=mn;
}
int main()
{
    int m;
    cout<<"Enter the siize of the array\n";
    cin>>m;
    int arr[m];
    cout<<"Start entering the elements in the array\n";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    memset(t,-1,sizeof(t));
    cout<<MCM(arr,1,m-1);
    return 0;
}