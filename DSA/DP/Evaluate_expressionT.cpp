#include<iostream>
using namespace std;
int Solve(string s,int i,int j,bool istrue)
{
    if(i>j)
    {
        return 0;
    }
    if(i==j)
    {
        if(istrue==true)
        {
            return s[i]=='T';
        }
        else
        {
            return s[i]=='F';
        }
    }
    int ans=0;
    for(int k=i+1;k<j;k=k+2)
    {
        int lt=Solve(s,i,k-1,true);
        int lf=Solve(s,i,k-1,false);
        int rt=Solve(s,k+1,j,true);
        int rf=Solve(s,k+1,j,false);
        if(s[k]=='|')
        {
            if(istrue==true)
            {
                ans=ans+lt*rt+lf*rt+lt*rf;
            }
            else
            {
                ans=ans+lf*rf;
            }
        }
        else if(s[k]=='&')
        {
            if(istrue==true)
            {
                ans=ans+lt*rt;
            }
            else
            {
                ans=ans+lf*rt+rf*lt+rf*lf;
            }
        }
        else if(s[k]=='^')
        {
            if(istrue==true)
            {
                ans=ans+lt*rf+rt*lf;
            }
            else
            {
                ans=ans+lt*rt+lf*rf;
            }
        }
    }
    return ans;
}
int main()
{
    string s;
    cout<<"Enter the string you would wanna enter: ";
    cin>>s;
    cout<<"There are "<<Solve(s,0,s.length()-1,true)<<" ways to get a true answer.";
    return 0;
}