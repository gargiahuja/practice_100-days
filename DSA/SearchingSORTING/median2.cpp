#include<iostream>
using namespace std;
float median(int a1[],int a2[],int n1,int n2)
{
    int start=0,end=n1-1;
    int i1,i2;
    while(start<=end)
    {
        i1=(end+start)/2;
        i2=(n1+n2+1)/2-i1;
        if(a1[i1]>a2[i2-1]&&a1[i1]<=a2[i2])
        {
        int m=max(a1[i1-1],a2[i2-1]);
        int n=min(a1[i1],a2[i2]);
        return (m+n)/2.0;
        }
        else if(a1[i1]>a2[i2])
        {
            end=i1-1;
        }
        else{
            start=i1+1;
        }
    }
}
int main()
{
    int n1,n2;
    cout<<"enter the size of first array\n";
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    cout<<"enter the size of second array\n";
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    cout<<median(a1,a2,n1,n2);
    return 0;
}