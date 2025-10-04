#include<iostream>
using namespace std;
int rotated_search(int arr[],int n,int find)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(find==arr[mid])return mid;
        if(arr[start]<arr[mid])
        {
            if((find<arr[mid])&&(find>=arr[start]))
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else
        {
            if(find<=arr[end]&&find>arr[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int n,find;
    cout << "enter the number of elements you want to add in the array\n";
    cin >> n;
    int arr[n];
    cout << "Start entering the elements in the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the number you want to find in the array\n";
    cin>>find;
    cout<<rotated_search(arr,n,find);
    return 0;
}