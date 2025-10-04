#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct Myhash
{
    int BUCKET;
    list<int>*table;
    Myhash(int b)
    {
        BUCKET =b;
        table=new list<int>[b];
    }
    void insert(int key)
    {
        int i=key%BUCKET;
        table[i].push_back(key);
    }
    void deletee(int key)
    {
        int i=key%BUCKET;
        table[i].remove(key);
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
};
int main()
{
    Myhash h(7);
    h.insert(70);
    h.insert(71);
    h.insert(9);
    h.insert(56);
    h.insert(72);
    cout << "Search 56: " << (h.search(56) ? "Found" : "Not Found") << endl;
    cout << "Search 100: " << (h.search(100) ? "Found" : "Not Found") << endl;
    h.deletee(56);
    cout << "After deletion, Search 56: " << (h.search(56) ? "Found" : "Not Found") << endl;
    return 0;
}