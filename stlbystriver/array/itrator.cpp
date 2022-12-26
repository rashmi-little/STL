#include<iostream>
#include<list>
#include<array>
using namespace std;
int main()
{
    array<int,6> arr;
    for(int i=0;i<6;i++)
    {
        arr.at(i)=i+1;
    }
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<endl;
    }
}