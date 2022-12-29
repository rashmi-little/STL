#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st{1,2,32,54,32,3,23,2};
   /* auto it1=st.begin();
    auto it2=st.end();
    it2--;
    it2--;    
    it2--; 
     it2--;
    it2--;    
    it2--;
    it2--;
    it2--;    
    it2--;     

    st.erase(it1,it2);*/
    // st.erase(23);
    st.erase(st.begin(),st.end());

    for (auto it = st.begin();it != st.end();it++)
    {
        cout<<*it<<" ";
    }
}