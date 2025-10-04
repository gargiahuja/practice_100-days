#include<iostream>
using namespace std;
int row,column;
char token='X';
bool win();
int arr[3][3];
string name1,name2;
int fun(void);
bool tie();
void print(void);
int main()
{   
   
    int a=0;
    cout<<"enter the player's name"<<endl;
    cout<<"enter first player's name"<<endl;
    cin>>name1;
    cout<<"enter second player's name"<<endl;
    cin>>name2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=a++;
        }
    }
    cout<<arr[0][0]<<"|"<<arr[0][1]<<"|"<<arr[0][2]<<endl;
    cout<<"-----"<<endl;
    cout<<arr[1][0]<<"|"<<arr[1][1]<<"|"<<arr[1][2]<<endl;
    cout<<"-----"<<endl;
    cout<<arr[2][0]<<"|"<<arr[2][1]<<"|"<<arr[2][2]<<endl;
    fun();
    
}
int fun()
    {
        int digit;
    if(token=='X')
    {
        cout<<name1<<" enter your digit\n";
        cin>>digit;
    }
    if(token=='O')
    {
        cout<<name2<<" enter your digit\n";
        cin>>digit;
    }
    if(digit==0)
    {
        row=0;
        column=0;
    }
    if(digit==1)
    {
        row=0;
        column=1;
    }
    if(digit==2)
    {
        row=0;
        column=2;
    }
    if(digit==3)
    {
        row=1;
        column=0;
    }
    if(digit==4)
    {
        row=1;
        column=1;
    }
    if(digit==5)
    {
        row=1;
        column=2;
    }
    if(digit==6)
    {
        row=2;
        column=0;
    }
    if(digit==7)
    {
        row=2;
        column=1;
    }
    if(digit==8)
    {
        row=2;
        column=2;
    }
    if(token=='X'&& arr[row][column]!='O' && arr[row][column]!='X')
    {
        arr[row][column]='X';
        token='O';
        print();
        win();
        fun();
    }
    else if(token=='O'&& arr[row][column]!='O' && arr[row][column]!='X')
    {
        arr[row][column]='O';
        token='X';
        print();
        win();
        fun();
    }
    else
    {
        cout<<"there is no empty space"<<endl;
        win();
        fun();
    }
    //win();
}
void print()
{
    cout<<arr[0][0]<<"|"<<arr[0][1]<<"|"<<arr[0][2]<<endl;
    cout<<"-----"<<endl;
    cout<<arr[1][0]<<"|"<<arr[1][1]<<"|"<<arr[1][2]<<endl;
    cout<<"-----"<<endl;
    cout<<arr[2][0]<<"|"<<arr[2][1]<<"|"<<arr[2][2]<<endl;
}
bool win()
{
    int i;
    if(arr[i][0]==arr[i][1] && arr[i][0]==arr[i][2] || arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i])
    {
        return true;
    }
    if(arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2] || arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0])
    {
        return true;
    }
    for(int j=0;j<3;j++)
    {
        for(int k=0;k<3;k++)
        {
            if(arr[j][k]!='O' && arr[j][k]!='X')
            {
                return false;
            }
        }
    }
    tie=true;
    return false;
    
}