#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int i=1;
    int c=1;
    while(i<=n)
    {
        int j=i;
        int k=1;
        while(k<=i)
        {
            cout<<j;
            k++;
            j++;
        }
        cout<<endl;
        i++;

}
    return 0;
}