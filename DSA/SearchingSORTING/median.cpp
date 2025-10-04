#include<iostream>
using namespace std;
void median(int a[],int b[],int na,int nb)
{
    int i=0,j=0,k=0,t[k];
    while(i<na&&j<nb)
    {
        if(a[i]<=b[j])
        {
            t[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j])
        {
            t[k]=b[j];
            j++;
            k++;
        }
    }
    if((na+nb)%2!=0)
    {
        cout<< t[(na+nb)/2];
    }
    else
    {
        cout<< float((t[(na+nb)/2]+t[(na+nb)/2-1])/2.0);
    }
}
int main()
{
    int na,nb;
    cout<<"Enter the size of both the array\n";
    cin>>na>>nb;
    int a[na],b[nb];
    for(int i=0;i<na;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<nb;i++)
    {
        cin>>b[i];
    }
    median(a,b,na,nb);
    return 0;
}