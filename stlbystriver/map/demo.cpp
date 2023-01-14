#include<bits/stdc++.h>
using namespace std;
int main()
{
   unordered_map<string, int> mp;
    mp.insert({"Little",16});
    mp["banty"]=11;
    mp["GULU"]=12;
    mp["gudulu"]=15;
    mp["banty"]=22;
    mp.emplace("Little",202);
    cout<<"The val is "<<mp["Little"]<<endl;
    for(auto it :mp)
    {
        cout<<it.first<<"\t"<<it.second<<endl; 
    }
    cout<<mp.size();
   /*  for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    } */
}