#include <iostream>
#include <set>
using namespace std;        
int main()
{
    set<float> st;
    st.insert(12.3);
    st.insert(12.4);
    st.insert(12.1);
    st.insert(12.0);
    st.insert(12);
    for (auto it = st.begin();it != st.end();it++)
    {
        cout<<*it<<" ";
    }
}