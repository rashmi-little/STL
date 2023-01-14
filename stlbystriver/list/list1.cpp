#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(1);
    ls.push_back(4);
    ls.push_back(7);
    ls.push_back(10);
    ls.push_back(13);
    ls.push_front(-1);
    ls.push_front(-3);
    ls.push_front(-6);
    ls.push_front(-9);
    for(auto it = ls.begin();it!=ls.end();it++)
    {
        cout << *it<<" ";
    }
}