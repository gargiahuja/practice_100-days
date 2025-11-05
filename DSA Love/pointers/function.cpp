#include<iostream>
using namespace std;
void update(int arr[],int n)
{
    arr[0]+=3;
}
int main()
{
    int arr[10]={1,3,4,5,6,7,8,9,2,10};
    cout<<"Before"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    update(arr,10);
    cout<<"After"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Before"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    update(arr+2,8);
    cout<<"After"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}