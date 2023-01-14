#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of string you wants to enter"<<endl;
    int size;
    cin>>size;
    map<string,int> mp;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the string "<<endl;
        string x;
        // getline(cin,x);
        cin>>x;
       mp[x]=mp[x]+1;
    }
    /* for(auto it:mp)
    {
        cout<<(it).first<<endl;
    } */
    cout<<"The output is"<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }

}