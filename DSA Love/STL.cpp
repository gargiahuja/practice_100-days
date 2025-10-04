#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(9);

    cout<<v.at(2)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    auto it=v.begin();
    cout<<*it<<endl;
    vector<int>a(10,1);
    for(auto it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    vector<int>b(a);
    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    b.at(2)=9;
    for(auto it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    a.at(2)=7;
    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:v)
    {
        cout<<it<<endl; 
    }
    return 0;
}