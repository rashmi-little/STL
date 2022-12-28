#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr[2];
    arr[0].push_back(4);
    arr[0].push_back(5);
    arr[1].push_back(7);
    arr[1].push_back(7);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
