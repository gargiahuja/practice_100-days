#include<iostream>
using namespace std;
bool search(int arr[],int n,int element)
{
    if(n==0) return false;
    if(arr[0]==element) return true;
    search(arr+1,n-1,element);
}
int main()
{
    int arr[10]={-1,2,3,4,5,6,7,8,10,10};
    if(search(arr,10,2)) cout<<"Found";
    else cout<<"Not found";
    return 0;
}