#include<iostream>
using namespace std;
struct hashing
{
    int *arr;
    int cap,size;
    hashing(int c)
    {
        cap=c;
        size=0;
        for(int i=0;i<cap;i++)
        {
            arr[i]=-1;
        }
    }
    int hash(int key)
    {
        return key%cap;
    }
    bool search(int key)
    {
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            {
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
            {
                return false;
            }
        }
        return false;
    }
    bool insert(int key)
    {
        if(size==cap)
        {
            return false;
        }
        int i=hash(key);
        while(arr[i]!=-1&&arr[i]!=-2&&arr[i]!=key)
        {
            i=(i+1)%cap;
            if(arr[i]==key)
            {
                return false;
            }
            else{
                arr[i]=key;
                size++;
                return true;
            }
        }
    }
    bool del(int key)
    {
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            {
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
            {
                return false;
            }
        }
        return false;
    }
    void show()
    {
        for(int i=0;i<cap;i++)
        {
            cout<<i<<". ";
            for(auto x:arr)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    hashing h(7);
    h.insert(49);
    h.insert(56);
    h.insert(72);
    h.insert(72);
    h.show();
    return 0;
}