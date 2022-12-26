#include<bits/stdc++.h>
#include<list>
#include<array>
#include<iostream>
using namespace std;
int main()
{
   array<int,6>arr={1,2,3,4,5,6};
    cout<<"In front order "<<endl;
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"In reverse order"<<endl;
    for(auto it=arr.rbegin();it!=(arr.rend());it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=arr.end()-1;it>=arr.begin();it--)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}