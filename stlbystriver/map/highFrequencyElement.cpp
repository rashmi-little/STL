#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>
using namespace std;

int highFrequency(vector<int> &vec,int n)
{
    map<int ,int> mp;
    unordered_map<int,int> ump;
    for(int i = 0 ;i < n ;i++) {
        ump[vec[i]] +=1;
    }
    for (auto x : ump) {
        cout << x.first <<" "<< x.second<< endl;
    }
    return 0;
}
int main() {
    cout << "Enter the length of the vector"<<endl;
    int length;
    vector<int> vec;
    cin >> length;
    for (int i = 0;i < length;i++)
    {
        int number;
        cin >> number;
        vec.push_back(number);
    }
    highFrequency(vec,length);
    return 0;
}