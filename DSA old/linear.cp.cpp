#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    cout<<"enter the value you need to search\n";
    int value;
    cin>>value;
    for(int i=0;i<len;i++)
    {
        if(arr[i]==value)
        {
            cout<<"element found\n";
        }
        else
        {
            cout<<"element not found";
        }
    }
    return 0;
}