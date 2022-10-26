#include <bits/stdc++.h>

using namespace std;
int priority(char c)
{
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    return 0;
}

void solve(string s)
{
    stack<char> st;
    string res = "";
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(isalpha(s[i])) res += s[i];
        else if(s[i] == '(') st.push(s[i]);
        else if(s[i] == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}
