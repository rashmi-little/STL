#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> st;
    cout<<"Enter the number of element"<<endl;
    int count;
    cin>>count;
    for(int i=0;i<count;i++)
    {
        int val;
        cin>>val; 
        st.insert(val);
    }
    // for(int x:st)
    // {
        // cout<<x<<" ";
    // }
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
}
