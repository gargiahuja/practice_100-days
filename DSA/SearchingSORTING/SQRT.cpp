#include<iostream>
using namespace std;
int sqrt(int n)
{
    int start=1,end=n,ans;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            start=mid+1;
            ans=mid;
        }
        else if(mid*mid>n)
        {
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number you want to calculate the root of\n";
    cin >> n;
    cout<<sqrt(n);
    return 0;
}