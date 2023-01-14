#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
    mp.insert({2,2});
    mp.insert({4,2});
    mp.insert({5,2});
    mp.insert({1,2});
    mp.insert({0,2});
    for(auto x:mp)
    {
        cout<<x.first<<"\t"<<x.second<<endl;
    }
}