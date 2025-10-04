#include<iostream>
using namespace std;
int remove_duplicate(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
} 
int main()
{
    int n;
    cout<<"enter the capacity of the array\n";
    cin>>n;
    int arr[n];
    cout<<"start entering the values in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //remove_duplicate(arr,n);
    cout<<"The size of the array is "<<remove_duplicate(arr,n);
    return 0;
}