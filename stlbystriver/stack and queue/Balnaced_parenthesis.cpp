#include <bits/stdc++.h>
using namespace std;
bool check_balanced(string s);
int main()
{
    cout << "Enter the expression as string" << endl;
    string s;
    cin >> s;
    bool val = check_balanced(s);
    if (val)
    {
        cout << "String is balanced" << endl;
    }
    else
    {
        cout << "String is not balanced" << endl;
    }
    return 0;
}
bool check_balanced(string s)
{
    if (s.length() % 2 != 0)
    {
        return false;
    }
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
           int temp=st.top();
            if((s[i]==')'&&temp=='(')||(s[i]=='}'&&temp=='{')||(s[i]==']'&&temp=='['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
}