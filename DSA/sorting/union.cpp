#include<iostream>
using namespace std;
void unionn(int a[],int b[],int n1,int n2)
{
    int i=0,j=0,c;
    while(i<n1&&j<n2)
    {
        if(i>0&&a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(j>0&&a[j]==a[j-1])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n1)
    {
        if(i>0&&a[i]!=a[i-1])
        {
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(j<n2)
    {
        if(j>0&&b[j]!=b[j-1])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}
int main()
{
    int n1;
    cout<<"enter the size of first array: \n";
    cin>>n1;
    int a[n1];
    cout<<"Start entering the elements in the first array\n";
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    int n2;
    cout<<"enter the size of second array: \n";
    cin>>n2;
    int b[n2];
    cout<<"Start entering the elements in the second array\n";
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    unionn(a,b,n1,n2);
    return 0;
}