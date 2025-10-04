#include<iostream>
using namespace std;
class complement
{
    string s;
    public:
    void getnumber(void);
    void check(void);
    void onescomplement(void);
    void print(void);
};
void complement::getnumber()
{
    cout<<"enter the number\n";
    cin>>s;
}
void complement::check()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        {
            
            cout<<"the value is not a binary number\n";
            

        }
    }
}
void complement::onescomplement()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
}  
void complement::print()
{
    cout<<s;
} 
int main()
{
    complement number;
    number.getnumber();
    number.check();
    number.onescomplement();
    number.print();
    return 0;
}