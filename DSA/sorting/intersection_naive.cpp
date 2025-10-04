#include<iostream>
using namespace std;
void intersection(int a[],int b[],int n1,int n2)
{
    int c;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a[i]==b[j]&&a[i]!=c)
            {
                cout<<a[i]<<" ";
                c=a[i];
                break;
            }
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
    intersection(a,b,n1,n2);
    return 0;
}