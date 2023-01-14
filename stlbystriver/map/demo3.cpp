#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
    mp.insert({1,1});
    mp.insert({2,2});
    mp.insert({3,3});
    mp.insert({4,4});
   /*  mp.insert({1,-1});
    mp.insert({3,-3}); */
    mp[1]=-1;
    mp[3]=-3;
    map<int,int> ::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }

}