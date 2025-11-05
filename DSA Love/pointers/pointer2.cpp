#include<iostream>
using namespace std;
int main()
{
    // int arr[10]={0};
    // cout<<"1st "<<arr<<endl;
    // cout<<"2nd "<<&arr<<endl;
    // cout<<"3rd "<<arr[0]<<endl;
    // cout<<"4th "<<&arr[0]<<endl;
    // cout<<"5th "<<*arr<<endl;
    // cout<<"6th "<<*(&arr[0])<<endl;
    // cout<<"7th "<<0[arr]<<endl;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p= &arr[0];
    cout<<p<<endl;
    cout<<"8th "<<*arr+2<<endl;
    cout<<"9th "<<*(arr+1)<<endl;
    cout<<"10th "<<*arr<<endl;
    cout<<"11th "<<&arr+1<<endl;
    cout<<"12th "<<&arr[0]+1<<endl;
    
    return 0;
}