#include<iostream>
using namespace std;
int Last(int arr[],int n,int find)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==find)
        {
            if(arr[mid]!=arr[mid+1]||mid==n-1)
            {
                return mid;
            }
            else if(arr[mid]==arr[mid+1])
            {
                start=mid+1;
            }
        }
        if(arr[mid]>find)
        {
            end=mid-1;
        }
        if(arr[mid]<find)
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the number of elements you want to add in the array\n";
    cin >> n;
    int arr[n];
    cout << "Start entering the elements in the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int find;
    cout<<"Enter the element you need to find\n";
    cin>>find;
    cout<<Last(arr,n,find);
    return 0;
}