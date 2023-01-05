#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
     vector<int> temp={1,1,1,2,2,2,3,5,3,23,11};
    cout<<count(temp.begin(),temp.end(),1); 
}