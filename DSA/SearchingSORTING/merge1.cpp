#include<iostream>
using namespace std;
void merge(int a[],int b[],int n1,int n2)
{
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<n1)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n2)
    {
        cout<<b[j]<<" ";
        j++;
    }
}
int main()
{
    int n1;
    cout<<"enter the size of the first array\n";
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    int n2;
    cout<<"enter the size of the second array\n";
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    merge(a,b,n1,n2);
    return 0;
}