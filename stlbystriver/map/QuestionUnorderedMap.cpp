#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of string"<<endl;
    int length;
    cin>>length;
    unordered_map<string,int> ump;
    for(int i=0;i<length;i++)
    {
        cout<<"Enter you string"<<endl;
        string x;
        cin>>x;
        ump[x]=ump[x]+1;
    }
    for(auto it:ump)
    {
        cout<<it.first<<"\t"<<it.second<<endl;
    }
    cout<<"Enter the string you want to check for frequency"<<endl;
    string temp;
    cin>>temp;
    cout<<ump[temp];
}