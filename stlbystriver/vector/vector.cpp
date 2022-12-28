#include<iostream>
#include<vector>

using namespace std;

int main()
{
    static int count=0;
    vector<vector<int>> vect(10,vector<int> (20,0));
    for(auto x:vect)
    {
        for(auto y:x)
        {
             count++;
            cout<<y;
        }
    cout<<"\n"<<count;
    }
}

