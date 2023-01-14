#include <iostream>
#include <queue>

using namespace std;

int main()
{
     priority_queue<int ,vector<int>,greater<int>> pq; 
    //priority_queue <int> pq;
    pq.push(4);
    pq.push(7);
    pq.push(2);
    pq.push(3);
    while(!(pq.empty()))
    {
        cout << pq.top() <<endl;
        pq.pop();
    }
}