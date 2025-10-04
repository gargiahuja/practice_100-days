#include<iostream>
using namespace std;
void frequency(int arr[],int n)
{
    int c=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
        }
        else if(arr[i]!=arr[i+1])
        {
            cout<<arr[i]<<" : "<<c<<endl;
            c=1;
        }
    }
    if(n==1||arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1]<<" : "<<c;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Start entering the values in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    frequency(arr,n);
    return 0;
}