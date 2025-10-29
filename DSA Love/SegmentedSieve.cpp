#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> simple(int limit)
{
    vector<bool>v(limit+1,true);
    vector<int>t;
    v[1]=false;
    for(int i=2;i<v.size();i++)
    {
        if(v[i])
        {
            t.push_back(i);
            for(int j=2*i;j<v.size();j=j+i)
            {
                v[i]=false;
            }
        }
    }
    return t;
}
int segmented(long long L,long long R)
{
    int limit=floor(sqrt(R))+1;
    vector<int>p=simple(limit);
    vector<bool>isprime(R-L+1,true);
    for(int i=0;i<p.size();i++)
    {
        if(p[i])
        {
            long long start=max((long long)p[i]*p[i],(L-1+p[i])/p[i]*p[i]);
            for(long long j=start;j<=R;j+=p[i])
            {
                isprime[j-L]=false;
            }
        }
    }
    for(long long i=L;i<=R;i++)
    {
        if(isprime[i-L]&&i>1)
        {
            cout<<i<<" ";
            cout<<endl;
        }
        
    }
}
int main()
{
    long long L, R;
    cout << "Enter range (L R): ";
    cin >> L >> R;

    segmented(L, R);
    return 0;
}