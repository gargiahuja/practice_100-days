#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct hashing
{
    int BUCKET;//size of table
    list<int>*table;
    hashing(int b)
    {
        BUCKET=b;
        table=new list<int>[b];
    }
    void insert(int key)
    {
        int i=key%BUCKET;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i=key%BUCKET;
        for(auto x:table[i])
        {
            if(x==key)
            {
                return true;
            }
        }
        return false;
    }
    void del(int key)
    {
        int i=key%BUCKET;
        if(search(key))
        {
            table[i].remove(key);
        }
    }
    void show()
    {
        for(int i=0;i<BUCKET;i++)
        {
            cout<<i<<". ";
            for(auto x:table[i])
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int s;
    cout<<"Enter the size of the table: ";
    cin>>s;
    hashing h(5);
    h.insert(20);
    h.insert(55);
    h.insert(69);
    h.show();
    return 0;
}