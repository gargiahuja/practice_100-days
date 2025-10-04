#include<iostream>
using namespace std;
float median(int a1[],int a2[],int n1,int n2)
{
    //cout<<"hii";
    int start=0,end=n1-1;
    int i1,i2;
    while(start<=end)
    {
        i1=(start+end)/2;
        i2=(n1+n2+1)/2-i1;
        int m=min(a1[i1],a2[i2]);
        int n=max(a1[i1-1],a2[i2-1]);
        if(m>n)
        {
            if((n1+n2)%2==0)
            {
                return (m+n)/2.0;
            }
            else
            {
                return m;
            }
        }
        else{
            start=i1+1;
        }
        
    }
}
int main()
{
    int n1;
    cout<<"Enter the size of the first array\n";
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    int n2;
    cout<<"Enter the size of the second array\n";
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    cout<<median(a1,a2,n1,n2);
    return 0;
}