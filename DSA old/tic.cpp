#include<iostream>
using namespace std;
int row,column;
char token;
int digit;
int arr[3][3];
int fun(void);
void print(void);
int main()
{   
    string name1,name2;
    int a=0;
    cout<<"enter the player's name"<<endl;
    cout<<"enter first player's name"<<endl;
    cin>>name1;
    cout<<"enter second player,s name"<<endl;
    cin>>name2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=a++;
        }
    }
    print();
    if(token='X')
    {
        cout<<name1<<" enter your digit\n";
        cin>>digit;
        fun();
    }
    if(token='O')
    {
        cout<<name2<<" enter your digit\n";
        cin>>digit;
        fun();
    }
    
}
int fun()
    {
        if(digit==0)
    {
        row==0;
        column==0;
        arr[row][column]=token;
        print();
    }
    if(digit==1)
    {
        row==0;
        column==1;
        arr[row][column]=token;
        print();
    }
    if(digit==2)
    {
        row==0;
        column==2;
        arr[row][column]=token;
        print();
    }
    if(digit==3)
    {
        row==1;
        column==0;
        arr[row][column]=token;
        print();
    }
    if(digit==4)
    {
        row==1;
        column==1;
        arr[row][column]=token;
        print();
    }
    if(digit==5)
    {
        row==1;
        column==2;
        arr[row][column]=token;
        print();
    }
    if(digit==6)
    {
        row==2;
        column==0;
        arr[row][column]=token;
        print();
    }
    if(digit==7)
    {
        row==2;
        column==1;
        arr[row][column]=token;
        print();
    }
    if(digit==8)
    {
        row==2;
        column==2;
        arr[row][column]=token;
        print();
    }
}
void print()
{
    cout<<arr[0][0]<<"|"<<arr[0][1]<<"|"<<arr[0][2]<<endl;
    cout<<"-----"<<endl;
    cout<<arr[1][0]<<"|"<<arr[1][1]<<"|"<<arr[1][2]<<endl;
    cout<<"-----"<<endl;
    cout<<arr[2][0]<<"|"<<arr[2][1]<<"|"<<arr[2][2]<<endl;
}