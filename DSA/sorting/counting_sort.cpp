#include<iostream>
using namespace std;
void count_sort(int arr[],int n)
{
    for(int cs=0;cs<n-1;cs++)
    {
        int item=arr[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++)
        {
            if(arr[i]<item)
            {
                pos++;
            }
        }
        swap(arr[pos],item);
        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
            {
                if(arr[i]<item)
                {
                    pos++;
                }
            }
            swap(arr[pos],item);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY: ";
    cin>>n;
    int arr[n];
    cout<<"START ENTERING THE ELEMENTS IN THE ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count_sort(arr,n);
    return 0;
}