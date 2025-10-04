#include<iostream>
using namespace std;
struct Interval
{
    int start,end;
};
void MergeInterval(Interval arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res].end>arr[i].start)
        {
            arr[res].end=max(arr[res].end,arr[i].end);
            arr[res].start=min(arr[res].start,arr[res].start);
        }
        else
        {
            res++;
            arr[res]=arr[i];
        }
    }
    for(int i=0;i<=res;i++)
    {
        cout<<arr[i].start<<" "<<arr[i].end<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of intervals you would wanna evaluate: ";
    cin>>n;
    Interval arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start>>arr[i].end;
    }
    MergeInterval(arr,n);
    return 0;
}