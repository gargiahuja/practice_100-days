#include<iostream>
#include<climits>
using namespace std;
int guest(int arr[],int dep[],int n)
{
    int i=0,j=0,curr=0,c=0;
    while(i<n&&j<n)
    {if(arr[i]<dep[j])
    {
        curr++;
        c=max(curr,c);
        i++;
    }
    else
    {
        curr--;
        c=max(curr,c);
        j++;
    }}
    while(i<n)
    {
        curr++;
        c=max(curr,c);
        i++;
    }
    while(j<n)
    {
        curr--;
        c=max(curr,c);
        j++;
    }
    return c;
}
int main()
{
    int n;
    cout<<"Enter the total number of people to enter into your party: ";
    cin>>n;
    int arr[n],dep[n];
    cout<<"Start entering the arrival and departure time of  any person: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>dep[i];
    }
    cout<<guest(arr,dep,n);
    return 0;
}