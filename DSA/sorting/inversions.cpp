#include<iostream>
using namespace std;
int inversions(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                c++;
            }
        }
    }
    return c;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements in the array: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The number of inversions possible: "<<inversions(arr,n);
    return 0;

}