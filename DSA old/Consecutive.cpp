#include<iostream>
using namespace std;
int consecutive(int arr[],int n)
{
    int c=0,maxx=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            c++;
        }
        else
        {
            maxx=max(c,maxx);
            c=0;
        }

    }
    return maxx;
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in th array according to the size\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<consecutive(arr,n);
    return 0;
}