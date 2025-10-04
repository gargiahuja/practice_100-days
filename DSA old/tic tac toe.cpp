#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int a=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=a++;
        }
    }
    cout<<arr[0][0]<<|<<arr[0][1]<<|<<arr[0][2]<<endl;
    cout<<_____<<endl;
    cout<<arr[1][0]<<|<<arr[1][1]<<|<<arr[1][2]<<endl;
    cout<<_____<<endl;
    cout<<arr[2][0]<<|<<arr[2][1]<<|<<arr[2][2]<<endl;
    cout<<_____<<endl;
}