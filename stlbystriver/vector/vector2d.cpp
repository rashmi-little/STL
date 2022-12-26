#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> dvector;
    vector<int> v1={0,1,2};
    vector<int> v2={3,4,5};
    vector<int> v3={6,7,8};
    dvector.push_back(v1);
    dvector.push_back(v2);
    dvector.push_back(v3);
    for(vector<int> x:dvector)
    {
        for(int y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}