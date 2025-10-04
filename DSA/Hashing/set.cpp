#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(9);
    s.insert(8);
    s.insert(3);
    s.insert(6);
    s.erase(2);
    for(auto i:s)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<(*i)<<" ";
    }
    cout<<endl;
    //s.clear();
    cout<<s.size()<<"\n";
    cout<<s.count(5);
    
    return 0;
}